#ifndef LEC_STDLIB_H
#define LEC_STDLIB_H
#include <stddef.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define RAND_MAX 2147483647
void *malloc(size_t); void *calloc(size_t,size_t); void *realloc(void *,size_t); void free(void *);
int abs(int); long labs(long); long long llabs(long long);
int atoi(const char *); long atol(const char *); double atof(const char *);
long strtol(const char *,char **,int); unsigned long strtoul(const char *,char **,int);
long long strtoll(const char *,char **,int); unsigned long long strtoull(const char *,char **,int);
double strtod(const char *,char **); float strtof(const char *,char **);
int rand(void); void srand(unsigned int);
char *getenv(const char *); int setenv(const char *,const char *,int); int system(const char *);
void qsort(void *,size_t,size_t,int (*)(const void *,const void *));
void *bsearch(const void *,const void *,size_t,size_t,int (*)(const void *,const void *));
void abort(void); void exit(int);
#endif
