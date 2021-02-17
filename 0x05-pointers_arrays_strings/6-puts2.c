#include "holberton.h"
/**
 *puts2 - prints every other character of a string
 *Return: always void
 *@str:puntero1
 **/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);		
		str = str + 2;
	}
	str = str - 1;
	_putchar('\n');
}
