#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str: pointer to the string
 *Return: always void
 **/
char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	for (i = 0; *(str + i); i++)
	{}
	ptr = malloc(sizeof(*ptr) * i); /*here the space for the string is separated*/
	if (str == NULL || ptr == NULL)
		return (NULL);
	for (j = 0; *(str + j); j++)
		*(ptr + j) = *(str + j);
	return (ptr);
}
