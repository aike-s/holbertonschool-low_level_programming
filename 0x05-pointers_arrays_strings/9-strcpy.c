#include "holberton.h"
/**
 *_strcpy - copies the string pointed to by src to the buffer pointed to by dest
 *return: dest
 *@src:puntero1
 *@dest:puntero2
 **/
char *_strcpy(char *dest, char *src)
{
	char *first = dest;

	while(src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = src[i];
	return(first);
}
