#include "holberton.h"
/**
 * _putchar - print a character on the screen
 *
 *@c: char ascii in int
 * 
 *Return: on success 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}