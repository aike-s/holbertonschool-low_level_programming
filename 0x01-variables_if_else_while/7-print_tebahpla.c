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
	int n;

	for (n = 'z'; n >= 'a';)
	{
		putchar (n);
		--n;
	}
	putchar ('\n');
	return (0);
}
