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
 *_strcat - concatenates two strings
 *Return: dest
 *@dest: s1
 *@src: s2
 **/
char *_strcat(char *dest, char *src)
{
	char *iter_dest = dest + length (dest);

	while (*src != '\0')
	{
		*iter_dest = *src;
		src++;
		iter_dest++;
	}
	*iter_dest = *src;
	return (dest);
}
