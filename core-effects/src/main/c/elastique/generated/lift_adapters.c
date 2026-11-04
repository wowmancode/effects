static uint32_t random_state=1;
#define MS
static void unsupported(const char *name) {
    fprintf(stderr, "DSP called an unsupported runtime function: %s\n", name);
    LIFT_FAIL(name, 0, 70);
}
static void *MS rt_alloc(unsigned flags, size_t n) { return (flags & 0x40) ? calloc(1, n) : malloc(n); }
static void *MS rt_identity(void *p) { return p; }
static void *MS rt_free(void *p) { free(p); return NULL; }
static int MS rt_unlock(void *p) { (void)p; return 1; }
static void MS rt_nop(void *p) { (void)p; }
static unsigned MS rt_zero(void) { return 0; }
static void *MS rt_malloc(size_t n) { return malloc(n); }
static void *MS rt_calloc(size_t n, size_t s) { return calloc(n, s); }
static void *MS rt_realloc(void *p, size_t n) { return realloc(p, n); }
static void *MS rt_align(size_t n, size_t a) {
    void *p = NULL;
    return posix_memalign(&p, a, n) ? NULL : p;
}
static void *MS rt_memcpy(void *d, const void *s, size_t n) { return memcpy(d, s, n); }
static void *MS rt_memmove(void *d, const void *s, size_t n) { return memmove(d, s, n); }
static void *MS rt_memset(void *d, int v, size_t n) { return memset(d, v, n); }
/* Match MSVCRT's generator. The clock seed is fixed for reproducible A17 output. */
static int MS rt_rand(void) { random_state = random_state * 214013U + 2531011U; return (int)((random_state >> 16) & 32767U); }
static void MS rt_srand(unsigned seed) { random_state = seed; }
static unsigned MS rt_clock_seed(void) { return 8; }
static unsigned MS rt_tid(void) { return (unsigned)getpid(); }
static void MS rt_sleep(unsigned n) { usleep(n * 1000U); }
static void MS rt_system_info(void *destination) {
    struct system_info {
        uint16_t architecture, reserved;
        uint32_t page_size;
        uintptr_t minimum, maximum, processor_mask;
        uint32_t processor_count, processor_type, allocation_granularity;
        uint16_t level, revision;
    } info = {9, 0, 4096, 65536, UINT64_C(0x7ffffffeffff), 1, 1, 8664, 65536, 6, 0};
    memcpy(destination, &info, sizeof(info));
}
static uint32_t read32(const void *p) { uint32_t v; memcpy(&v, p, 4); return v; }
static int32_t signed32(const void *p) { int32_t v; memcpy(&v, p, 4); return v; }
static void *MS rt_dynamic_cast(void *object, int delta, void *source_type, void *target_type, int reference) {
    (void)source_type;
    if (!object) return NULL;
    unsigned char *subobject = (unsigned char *)object + delta;
    void **vtable = *(void ***)subobject;
    unsigned char *locator = vtable[-1];
    if (read32(locator) != 1) unsupported("unrecognized dynamic-cast RTTI");
    unsigned char *base = locator - read32(locator + 20);
    unsigned char *complete = subobject - read32(locator + 4);
    unsigned char *hierarchy = base + read32(locator + 16);
    unsigned count = read32(hierarchy + 8);
    unsigned char *array = base + read32(hierarchy + 12);
    if (count > 1024) unsupported("invalid dynamic-cast hierarchy");
    for (unsigned i = 0; i < count; ++i) {
        unsigned char *descriptor = base + read32(array + i * 4);
        if (base + read32(descriptor) != target_type) continue;
        int32_t member = signed32(descriptor + 8), vbptr = signed32(descriptor + 12);
        if (vbptr >= 0) {
            unsigned char *table = *(unsigned char **)(complete + vbptr);
            member += vbptr + signed32(table + signed32(descriptor + 16));
        }
        return complete + member;
    }
    if (reference) unsupported("failed reference dynamic cast");
    return NULL;
}
static double MS rt_pow(double x, double y) { return pow(x, y); }
static float MS rt_powf(float x, float y) { return powf(x, y); }
static double MS rt_hypot(double x, double y) { return hypot(x, y); }
static double MS rt_atan2(double y, double x) { return atan2(y, x); }
static float MS rt_atan2f(float y, float x) { return atan2f(y, x); }
#define MATH1(n) static double MS rt_##n(double x) { return n(x); } \
                 static float MS rt_##n##f(float x) { return n##f(x); }
MATH1(sin) MATH1(cos) MATH1(tan) MATH1(atan) MATH1(asin) MATH1(acos)
MATH1(sqrt) MATH1(log) MATH1(log10) MATH1(exp) MATH1(floor) MATH1(ceil)
MATH1(tanh) MATH1(sinh) MATH1(cosh)
struct binding { const char *name; void *function; };
static const struct binding bindings[] = {
    {"GlobalAlloc", rt_alloc}, {"GlobalLock", rt_identity}, {"GlobalHandle", rt_identity},
    {"GlobalUnlock", rt_unlock}, {"GlobalFree", rt_free}, {"LocalFree", rt_free},
    {"malloc", rt_malloc}, {"calloc", rt_calloc}, {"realloc", rt_realloc}, {"free", rt_free},
    {"_aligned_malloc", rt_align}, {"_aligned_free", rt_free},
    {"memcpy", rt_memcpy}, {"memmove", rt_memmove}, {"memset", rt_memset},
    {"rand", rt_rand}, {"srand", rt_srand}, {"pow", rt_pow}, {"powf", rt_powf}, {"_hypot", rt_hypot},
#define B(n) {#n, rt_##n}, {#n "f", rt_##n##f}
    B(sin), B(cos), B(tan), B(atan), B(asin), B(acos), B(sqrt), B(log), B(log10),
    B(exp), B(floor), B(ceil), B(atan2), B(tanh), B(sinh), B(cosh),
    {"GetCurrentThreadId", rt_tid}, {"Sleep", rt_sleep}, {"timeGetTime", rt_clock_seed},
    {"__RTDynamicCast", rt_dynamic_cast},
    {"GetSystemInfo", rt_system_info},
    {"ErrorReport_StartTrapBypass", rt_zero}, {"ErrorReport_EndTrapBypass", rt_zero},
    {"InitializeCriticalSection", rt_nop}, {"DeleteCriticalSection", rt_nop},
    {"EnterCriticalSection", rt_nop}, {"LeaveCriticalSection", rt_nop},
};

