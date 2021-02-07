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
	int c = 'a';
	int b = 'A';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar (b);
		b++;
	}
	putchar ('\n');
	return (0);
}
