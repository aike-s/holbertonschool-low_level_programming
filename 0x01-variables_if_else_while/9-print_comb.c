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

	while (c <= '9')
	{
		putchar (c);
		if (c <= '8')
		{
			putchar (',');
			putchar (' ');
		}
		c++;
	}
	putchar ('\n');
	return (0);
}
