#include "holberton.h"
/**
 *_isupper - checks for uppercase character
 *@c: parameter of variable
 *Return: on success 1, else 1
 **/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
