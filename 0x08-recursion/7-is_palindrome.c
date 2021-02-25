#include "holberton.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: pointer to the string
 *Return: len
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 *palindrome_recursive - find if a string is palindrome
 *@s: string
 *@length: length of a string
 *Return: a number
 **/
int palindrome_recursive(char *s, int length)
{
	if (s[0] != s[length])
		return (0);
	if (length <= 1)
		return (1);
	else
		return (palindrome_recursive(s + 1, length - 2));
}
/**
 *is_palindrome - find if a string is palindrome
 *@s: string
 *Return: 1 if a string is a palindrome and 0 if not
 **/
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (palindrome_recursive(s, length - 1));
}
