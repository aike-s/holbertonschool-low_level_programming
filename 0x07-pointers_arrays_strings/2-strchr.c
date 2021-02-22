#include "holberton.h"
/**
 *_strchr - locates a character in a string
 *@s: pointer
 *@c: character in pointer
 *Return: pointer s on sucess or NULL
 **/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
