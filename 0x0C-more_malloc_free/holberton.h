#ifndef HOLBERTON_H
#define HOLBERTON_H
/*writes the character c to stdout*/
int _putchar(char c);

/*allocates memory using malloc*/
void *malloc_checked(unsigned int b);

/*concatenates two strings*/
char *string_nconcat(char *s1, char *s2, unsigned int n);

/*allocates memory for an array, using malloc*/
void *_calloc(unsigned int nmemb, unsigned int size);

/*creates an array of integers*/
int *array_range(int min, int max);
#endif
