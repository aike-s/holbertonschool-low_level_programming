#include "holberton.h"
/**
 *test - returns the natural square root of a number
 *@posibility: search the natural square root
 *@number: the number evaluaded
 *Return: diferent
 **/
int test(int posibility, int number)
{
	if (posibility * posibility == number)
		return (posibility);
	if (posibility * posibility > number)
		return (-1);
	else
		return (test(posibility + 1, number));
}
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number
 *Return: the natural square root of a number
 **/
int _sqrt_recursion(int n)
{
	return (test(1, n));
}
