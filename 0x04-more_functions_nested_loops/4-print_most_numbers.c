#include "holberton.h"
/**
 *print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *Return: always void
 **/
void print_most_numbers(void)
{
	int numero;

	for (numero = '0'; numero <= '9'; numero++)
		if (numero != '2' && numero != '4')
			_putchar(numero);
	_putchar('\n');
}
