#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: the number of times it prints
 *@c: character to print
 *Return: char pointer
 **/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(*ptr) * size);
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++) /*this will tell me the size of the array*/
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
