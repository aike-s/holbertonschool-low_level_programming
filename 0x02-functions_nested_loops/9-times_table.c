#include "holberton.h"
/**
*times_table - prints the 9 times table, starting with 0
*Return: always void
*
**/
void times_table(void)
{
	int filas, columnas;
	int m;

	for (columnas = 0; columnas <= 9; columnas++)
	{
		for (filas = 0; filas <= 9; filas++)
		{
			m = filas * columnas;
			if (m <= 9)
			{
				_putchar(m + 48);
				if (filas != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar ((m / 10) + '0');
				_putchar((m % 10) + '0');
				if (filas != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
