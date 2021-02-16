#include "holberton.h"
/**
 *swap_int - swaps the values of two integers
 *return: always void
 *@a:puntero1
 *@b:puntero2
 **/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
