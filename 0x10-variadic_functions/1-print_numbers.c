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
	unsigned int i, j;

	if (n == 0)
		return;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d", va_arg(arg, int));
			for (j = 0; separator[j]; j++)
				printf("%c", separator[j]);
		}
		else
			printf("%d", va_arg(arg, int));
	}
	printf("\n");
	va_end(arg);
}
