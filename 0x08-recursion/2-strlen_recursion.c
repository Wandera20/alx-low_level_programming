#include "main.h"
/**
 * _strlen_recursion - returns string length
 * @s: input
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int z = 0;

	if (*s)
	{
	z++;
	z += _strlen_recursion(s + 1);
	}
	return (z);
}
