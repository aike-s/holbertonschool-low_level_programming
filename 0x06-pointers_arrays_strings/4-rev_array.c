#include "holberton.h"
/**
 *reverse_array - reverses the content of an array of integers
 *Return: always void
 *@n: numero
 *@a: pointer to array
 **/
void reverse_array(int *a, int n)
{
	int length = n, lengthHalf,  mirror;
	int temp;

	length--;
	lengthHalf = length / 2;
	for (mirror = 0; mirror < lengthHalf; mirror++, length--)
	{
		temp = a[mirror];
		a[mirror] = a[length];
		a[length] = temp;
	}
}
