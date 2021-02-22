#include "holberton.h"
/**
 *_strpbrk -  searches a string for any of a set of bytes
 *@accept:pointer2
 *@s: pointer1
 *Return: s + i on succes, else NULL
 **/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
			if (*(s + i) == *(accept + j))
				return (s + i);
	}
	return (0);
}
