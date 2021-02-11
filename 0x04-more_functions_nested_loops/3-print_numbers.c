#include "holberton.h"
/**
 *print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *Return: always void
 **/
void print_numbers(void)
{
	int numero;

	for (numero = 0; numero <= 9; numero++)
		_putchar(numero);
	_putchar('\n');
}
