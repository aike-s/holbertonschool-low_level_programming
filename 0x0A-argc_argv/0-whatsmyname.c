#include <stdio.h>
#include "holberton.h"
/**
 *main - program that prints its name
 *@argv: pointer to the string
 *@argc: number of the word in the string
 *Return: the name of the string
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
