#include "holberton.h"
/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n:parameter1
 *Return: always void
 **/
void print_diagonal(int n)
{
	int intera;
	int space;
	
	if (n <= 0)
		_putchar('\n');
	else
	{
		for(intera = 0; intera < n; intera++)
		{
			for (space = 0; space < intera; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
