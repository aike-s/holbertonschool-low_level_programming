#include "holberton.h"
/**
* jack_bauer -prints every minute of the day from 00:00 to 23:59
*
* Return: always void
*
**/
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
