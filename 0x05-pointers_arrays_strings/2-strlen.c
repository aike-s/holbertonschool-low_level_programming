#include "holberton.h"
/**
 * _strlen -  returns the length of a string
 *Return: lengthx
 *@s:puntero1
 **/
int _strlen(char *s)
{
	char length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}
	return (length);
}
