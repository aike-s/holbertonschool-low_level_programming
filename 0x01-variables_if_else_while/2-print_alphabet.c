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
	char c = 'a';

	while (c == 'z')
	{
		putchar (c);
		c++;
	}
	return (0);
}
