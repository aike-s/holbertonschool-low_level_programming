#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long longint;
long long longlongint;
float floatType;
printf("Size of char: %zu byte (s) \n", sizeof(charType));
printf("Size of int: %zu byte (s) \n", sizeof(intType));
printf("Size of a long int: %i byte (s) \n", sizeof(longint));
printf("Size of a long long int: %i byte (s) \n", sizeof(longlongint));
printf("Size of float: %zu byte (s) \n", sizeof(floatType));
return (0);
}
