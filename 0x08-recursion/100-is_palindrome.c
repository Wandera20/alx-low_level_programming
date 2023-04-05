#include "main.h"
#include <string.h>
/**
 * is_palindrome - returns 1 if string is palindrome and 0 if not
 * @s: string
 * @len: length of string
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i;
	int len;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
	if (s[i] != s[len - i - 1])
	{
	return (0);
	}
	}
	return (1);
}
