#include "holberton.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line
 *Return: always 0
 *two_digits - prints two digits in one character
 *Return: always void
 **/
int two_digits(int)
{
	int numero = 0;

	if (numero > 9)
	{
		_putchar ('0' + numero / 10);
		_putchar ('0' + numero % 10);
	}
	return (0);
}
void more_numbers(void)
{
	int numero;
       	int loop;

	for (loop = 0; loop <= 9; loop++)
	{
		for (numero = 0; numero <= 14; numero++)
			if (numero <= '9')
				_putchar(numero);
			else
			{
				two_digits(numero);
			}
		_putchar('\n');
	}
}
