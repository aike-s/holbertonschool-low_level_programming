#include "holberton.h"
/**
 *print_triangle -  prints a triangle
 *@size: parameter
 *Return: always void
 **/
void print_triangle(int size)
{
	int down, right, symbol;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (down = 0; down < size; down++)
		{
			for (right = size; right >= down + 2; right--)
				_putchar(' ');
			for (symbol = 0; symbol < down + 1; symbol++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
