#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: always 0
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(arg);
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d%s", va_arg(arg, int), separator);
		else
			printf("%d", va_arg(arg, int));
	}
	printf("\n");
	va_end(arg);
}
