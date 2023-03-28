#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @*s: the string
 *
 * Return: the reversed string
 */
void print_rev(char *s)
{
	int see = 0;
	int p;

	while (*(s + see) != '\0')
	{
	see++;
	}
	for (p = see - 1; p >= 0; p--)
	{
	_putchar(*(s + p));
	}
	_putchar('\n');
}
