#include "holberton.h"
/**
 *print_line - draws a straight line in the terminal
 *@n:parameter1
 *Return: always void
 **/
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		_putchar('_');
		print_line(n - 1);
	}
}
