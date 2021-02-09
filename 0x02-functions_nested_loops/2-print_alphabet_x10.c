#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet x10 on the screen
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	char character;
	int loop;

	for (loop = 0; loop <= 9; loop++)
	{
		for (character = 'a'; character <= 'z'; character++)
			_putchar (character);
		_putchar ('\n');
	}
}
