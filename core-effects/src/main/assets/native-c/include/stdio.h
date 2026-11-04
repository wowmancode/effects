#ifndef LEC_STDIO_H
#define LEC_STDIO_H
#include <stddef.h>
#include <stdarg.h>
typedef struct lec_FILE FILE;
extern FILE *stdin, *stdout, *stderr;
#define EOF (-1)
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
FILE *fopen(const char *,const char *); int fclose(FILE *); int fflush(FILE *);
size_t fread(void *,size_t,size_t,FILE *); size_t fwrite(const void *,size_t,size_t,FILE *);
int fseek(FILE *,long,int); long ftell(FILE *); void rewind(FILE *);
int fgetc(FILE *); int fputc(int,FILE *); char *fgets(char *,int,FILE *); int fputs(const char *,FILE *);
int printf(const char *,...); int fprintf(FILE *,const char *,...);
int snprintf(char *,size_t,const char *,...); int sprintf(char *,const char *,...);
int vsnprintf(char *,size_t,const char *,va_list); int puts(const char *); int putchar(int);
int remove(const char *); int rename(const char *,const char *); void perror(const char *);
#endif
