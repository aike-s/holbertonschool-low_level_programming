#include "holberton.h"
/**
* print_sign - prints the sign of a number
*
*@n: char ascii in int
*
* Return: on success 1
*
**/
int print_sign(int n)
{
	if (n % 10 > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n % 10 == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
}
