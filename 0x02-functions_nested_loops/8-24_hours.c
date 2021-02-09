#include "holberton.h"
/**
 * _putchar - print a character on the screen
 *
 *@c: char ascii in int
 *
 * Return: on success 1
 *
 */
void jack_bauer(void)
{
	short minutes;
	short hours;

	for (hours = 0; hours <= 23; hours++)
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar ('\n');
		}
}
