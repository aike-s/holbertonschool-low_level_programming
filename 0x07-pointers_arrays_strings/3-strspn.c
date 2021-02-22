#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@accept:pointer2
 *@s: pointer1
 *Return: len
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0;
	unsigned int len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[j] == '\0')
			return (len);
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len += 1;
				break;
			}
		}
	}
	return (len);
}
