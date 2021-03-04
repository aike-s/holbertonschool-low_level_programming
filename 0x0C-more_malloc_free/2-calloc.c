#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: number of memory
 *@size: size of the spaces in the memory
 *Return: always void
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL) /*when malloc fails then malloc is equal to NULL*/
		return (NULL);
	return (ptr);
}
