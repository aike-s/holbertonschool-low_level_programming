#include "holberton.h"
/**
*print_last_digit - prints the last digit of a number
*@n:parameter
*Return: always 0
*
**/
int print_last_digit(int n)
{
	int m = n % 10;

	if (n < 0)
	{
		n = n * (-1);
		m = n % 10;
		_putchar(48 + m);
		return (m);
	}
	_putchar(48 + m);
	return (m);
}
