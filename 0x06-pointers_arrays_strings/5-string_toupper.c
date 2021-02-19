#include "holberton.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *Return: miau
 *@miau: pointer
 **/
char *string_toupper(char *miau)
{
	int i;

	for (i = 0; miau[i] != '\0'; i++)
		if (miau[i] >= 'a' && miau[i] <= 'z')
			miau[i] = miau[i] - 32;
	return (miau);
}
