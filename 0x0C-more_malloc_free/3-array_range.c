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
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
