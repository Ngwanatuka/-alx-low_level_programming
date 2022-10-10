#ifndef MAIN_FILE
#define MIAN_FILE
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

int main(void);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif
