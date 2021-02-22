#include "holberton.h"
/**
 *_memset - fills memory with a constant byte
 *@s: pointer
 *@b: character in pointer
 *@n: number of positions
 *Return: pointer s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
