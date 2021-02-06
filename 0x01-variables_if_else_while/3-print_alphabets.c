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

	while (('a' < c && c <= 'z') || ('A' < b && b <= 'Z'))
	{
		putchar (c);
		c++;
			putchar (b);
			b++;
	}
	return (0);
}
