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
	int i, len = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		len++;
	ptr = malloc(sizeof(int) * len + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
