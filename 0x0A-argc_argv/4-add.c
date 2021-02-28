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
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if(*argv[i] >= 'a' && *argv[i] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
				printf("%d\n", sum);
				return (0);
			}
		}
	}
		else
			printf("0\n");
		return (0);
}
