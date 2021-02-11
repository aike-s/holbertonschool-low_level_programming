#include "holberton.h"
/**
 *print_square - prints a square, followed by a new line
 *@size:parameter1
 *Return: always void
 **/
void print_square(int size)
{
	int down;
	int right;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (down = 0; down < size; down++)
		{
			for (right = 1; right < size; right++)
				_putchar ('#');
			_putchar ('#');
			_putchar ('\n');
		}
	}
}
