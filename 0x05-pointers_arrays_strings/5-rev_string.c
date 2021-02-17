#include "holberton.h"
/**
 *rev_string - reverses a string
 *Return: always void
 *@s:puntero1
 **/
void rev_string(char *s)
{
	int length, lengthHalf,  mirror;
	char temp;

	for (length = 0; s[length]; length++);
	length--;
	lengthHalf = length / 2; /*se divide la longtud*/
	for (mirror = 0; mirror < lengthHalf; mirror++, length--)
	{
		temp = s[mirror];
		s[mirror] = s[length];
		s[length] = temp; /*se cambian los valores de las variables*/
	}
}
