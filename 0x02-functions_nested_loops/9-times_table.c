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
				if (filas > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(m + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar ((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
