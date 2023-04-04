#include "main.h"
/**
 * _memset - fills the first n bytes of a memory by constant byte b
 * @n: input
 * @*s: input
 * @b: input
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j;

	j = 0;

	for (; n > 0; j++)
	{
	s[j] = b;
	n--;
	}
	return (s);
}
