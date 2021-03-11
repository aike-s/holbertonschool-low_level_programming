#include "3-calc.h"
#include <stdio.h>
/**
 *op_add - sum a and b
 *@a: n1
 *@b: n2
 *Return: the sum of a and b
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtraction to a and b
 *@a: n1
 *@b: n2
 *Return: the difference of a and b
 **/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplicates a and b
 *@a: n1
 *@b: n2
 *Return: the product of a and b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divides a and b
 *@a: n1
 *@b: n2
 *Return: the result of the division of a by b
 **/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - division of a by b
 *@a: n1
 *@b: n2
 *Return: the remainder of the division of a by b
 **/
int op_mod(int a, int b)
{
	return (a % b);
}
