#ifndef MAIN
#define MAIN
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int check_number(char *s);
char *array_initializer(int s);
char *zero_finder(char *s);
int find_digit(char a);
void find_prod(char *p, char *m, int d, int z);
void sum_num(char *fprod, char *nprod, int nl);
#endif
