#include "holberton.h"
/**
 * _putchar - print a character on the screen
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		_putchar (character);
	_putchar ('\n');
}
