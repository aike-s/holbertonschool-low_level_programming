#include "holberton.h"
/**
 * _putchar - print a character on the screen
 *
 *@c: char ascii in int
 *
 * Return: on success 1
 *
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
