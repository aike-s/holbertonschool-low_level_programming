#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: string1
 *@s2: string2
 *Return: char
 **/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int j, i;
	char space = 0;
	char len1 = sizeof(*s1);
	char len2 = sizeof(*s2);

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	space = len1 + len2;
	ptr = malloc(sizeof(*ptr) * space + 1);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; *(s1 + j); j++)
		*(ptr + j) = *(s1 + j);
	for (i = 0; *(s2 + i); i++, j++)
		*(ptr + j) = *(s2 + i);
	return (ptr);
}
