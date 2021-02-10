#include "holberton.h"
/**
*print_to_98 - prints all natural numbers from n to 98, followed by a new line
*Return: always 0
*
**/
void print_to_98(int n)
{
	while (n == 98)
	{
		printf("%d", 98);
	}
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("%d", 98);
}
