#include "holberton.h"
/**
* _abs - computes the absolute value of an integer
*@a:pe
*Return: a
*
**/
int _abs(int a)
{
	if (a < 0)
		a = a * (-1);
	return (a);
}
