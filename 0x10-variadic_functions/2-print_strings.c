#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_strings - prints a string
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: always 0
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(arg);
	unsigned int i;
	char *string;

	if (separator == '\0')
		separator = "";
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, char *); /*pointer to the string*/
		if (i >= (n - 1))
			separator = "";
		if (string == NULL)
			printf("(nil)%s", separator);
		else
			printf("%s%s", string, separator);
	}
	printf("\n");
	va_end(arg);
}
