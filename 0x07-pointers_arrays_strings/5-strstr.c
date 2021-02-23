#include "holberton.h"
/**
 *_strpbrk -  searches a string for any of a set of bytes
 *@haystack:string 1
 *@needle:string 2
 *Return: 
 **/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle + j))
			for (j = 0; *(needle + j) != '\0'; j++)
			{
				return (haystack + i);
				break;
			}
	}
	return (0);
}
