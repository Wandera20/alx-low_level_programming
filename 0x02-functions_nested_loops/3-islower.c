#include "main.h"
/**
 * _islower - checkes for lower case character
 * @c: character to be checked
 *
 * Return: 1 if c is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
