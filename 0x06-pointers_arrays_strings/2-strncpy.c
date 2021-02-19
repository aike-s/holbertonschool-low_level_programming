#include "holberton.h"
/**
 *_strncpy - copies a string
 *Return: dest
 *@dest: s1
 *@src: s2
 *@n: n valores
 **/
char *_strncpy(char *dest, char *src, int n)
{
	char *first = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (first);
}
