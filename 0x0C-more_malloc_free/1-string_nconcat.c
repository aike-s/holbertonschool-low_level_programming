#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: bytes for s2
 *Return: always void
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j;
	int len1 = 0, len2 = 0, space = 0;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	if ((int)n < len2)
		len2 = (int)n;
	space += len1 + len2;
	ptr = malloc(sizeof(char) * space + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] && i < space; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
