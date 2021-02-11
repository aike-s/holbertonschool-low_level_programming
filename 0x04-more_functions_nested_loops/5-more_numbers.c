#include "holberton.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *Return: always void
 **/
void more_numbers(void)
{
	int numero;
	int loop;

	for (loop = 0; loop <= 9; loop++)
	{
		for (numero = 0; numero <= 14; numero++)
			if (numero > 9)
			{
				_putchar((numero / 10) + '0');
				_putchar((numero % 10) + '0');
			}
			else
				_putchar (numero);
	}
}
