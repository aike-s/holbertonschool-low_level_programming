#include "holberton.h"
/**
 *puts_half - prints half of a string
 *Return: always void
 *@str:puntero1
 **/
void puts_half(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length = length + 1;
		str = str + 1;
	}
	str = str - (length / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
