#include "main.h"
/**
 * puts_half - prints half of the string dollowed by a new line
 * if odd length, n = (length_of_the_string - 1) / 2
 * @str : input
 * Return: half of the string
 */
void puts_half(char *str)
{
	int i, j, see;

	see = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	see++;
	}
	j = (see / 2);
	if ((see % 2) == 1)
	{
	j = ((see + 1) / 2);
	}
	for (i = j; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
