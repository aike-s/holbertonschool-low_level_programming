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

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i); i++)
	{}
	/*here the space for the string is separated*/
	ptr = malloc(sizeof(*ptr) * i + 1);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; *(str + j); j++)
		*(ptr + j) = *(str + j);
	return (ptr);
}
