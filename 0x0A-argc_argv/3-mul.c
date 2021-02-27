#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *main - program that prints its name
 *@argv: pointer to the string
 *@argc: number of the word in the string
 *Return: the name of the string
 **/
int main(int argc, char *argv[])
{
	int i = 1;
	int mul = 1;

	if (argc == 2)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
