#include "main.h"
/**
 * int_strlen - returns the string length
 * @*s: is the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int see = 0;

	while (*s != '\0')
	{
	see++;
	s++;
	}
	return (see);
}
