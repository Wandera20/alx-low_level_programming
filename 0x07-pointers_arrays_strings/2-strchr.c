#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: the string containing the character c
 * Return: a pointer to character c
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (&s[k]);
	}
	return (0);
}
