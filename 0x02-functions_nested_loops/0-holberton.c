#include "holberton.h"
/**
 * _putchar - print a character on the screen
 *
 * Return: Always 0 (Success)
 *
 */
int _putchar (char c)
{
	char word [10] = "Holberton\n";
	int i;

	for (i = 0; i < 10; i++)
		_putchar (word[i]);
	
	return (0);
}
