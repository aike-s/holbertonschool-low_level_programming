#include "holberton.h"
/**
 *_strstr - locates a substring
 *@haystack:string 1
 *@needle:string 2
 *Return: haystack
 **/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;

	while (haystack[i] != '\0') /*recorre haystack*/
	{
		while (*(haystack + i) && *(needle + i) && haystack[i] == needle[i])
			i++;
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
