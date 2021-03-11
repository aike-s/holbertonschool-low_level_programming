#ifndef VARIADIC_FUNTION_H
#define VARIADIC_FUNTION_H
/*returns the sum of all its parameters*/
int sum_them_all(const unsigned int n, ...);
/*prints numbers*/
void print_numbers(const char *separator, const unsigned int n, ...);
/*prints strings*/
void print_strings(const char *separator, const unsigned int n, ...);
/*prints anything*/
void print_all(const char * const format, ...);
/*writes the character c to stdout*/
int _putchar(char c);
#endif
