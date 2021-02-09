#include "holberton.h"
/**
* _islower - checks for lowercase character
*
*@c:char ascii in in ascii
*Return: on success 1
**/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
