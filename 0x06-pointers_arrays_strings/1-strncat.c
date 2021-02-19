#include "holberton.h"
/**
 *length -  returns the length of a string
 *Return: length
 *@dest:puntero1
 **/
int length(char *dest)
{
	int length = 0;

	while (*dest != '\0')
	{
		length++;
		dest++;
	}
	return (length);	
}
/**
 *_strncat - concatenates two strings
 *Return: dest
 *@dest: s1
 *@src: s2
 *@n: numero
 **/
char *_strncat(char *dest, char *src, int n)
{
        const unsignet int log = length(dest);
	int i;
	
	for (i = 0; i < n; i++)
		*(dest + i + log) = *(src + i);
	return(dest);
}
