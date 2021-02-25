#include "holberton.h"
/**
 *test - returns whether a number is prime or not
 *@n: parameter 1
 *@m: parameter 2
 *Return: 1 on succes, otherwise 0
 **/
int test(int n, int m)
{
	if (n <= 1 || n % m == 0)
		return (0);
	if (m > n / 2)
		return (1);
	else
		return (test(n, m + 1));
}
/**
 *is_prime_number - returns whether a number is prime or not
 *@n: parameter
 *Return: test
 **/
int is_prime_number(int n)
{
	return (test(n, 2));
}
