#include "holberton.h"
/**
 *_puts - prints a string
 *return:always void
 *@str:puntero1
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
