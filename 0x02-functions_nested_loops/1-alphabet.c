#include "holberton.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 *Return: void funtion
 */
void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		_putchar (character);
	_putchar ('\n');
}
