#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int c = '0';

	while (c < 100)
	{
		putchar((c/10)+'0');
		putchar((c%10)+'0');
		if (c <= 98)
		{
			putchar (',');
			putchar (' ');
		}
		c++;
	}
	putchar ('\n');
	return (0);
}
