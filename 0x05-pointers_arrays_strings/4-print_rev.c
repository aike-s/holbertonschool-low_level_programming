#include "holberton.h"
/**
 *print_rev - prints a string, in reverse
 *Return: length
 *@s:puntero1
 **/
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}
	s = s - 1;
	while (length > 0)
	{
		_putchar(*s);
		length--;
		s = s - 1;
	}
	_putchar ('\n');
}
