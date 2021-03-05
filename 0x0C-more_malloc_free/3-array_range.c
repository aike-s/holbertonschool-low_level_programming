#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - creates an array of integers.
 *@min: minimum
 *@max: maximum
 *Return: an int
 **/
int *array_range(int min, int max)
{
	int *ptr;
	int i, space = 0;

	if (min > max)
		return (NULL);
	space = (max - min) + 1;
	ptr = malloc(sizeof(int) * space);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= space; i++, min++)
		*(ptr + i) = min;
	return (ptr);
}
