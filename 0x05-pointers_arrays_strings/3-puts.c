#include "main.h"
/**
 * puts - writes a string followed by a new line
 * @str: the string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
