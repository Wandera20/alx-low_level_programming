#include "main.h"
/**
 * puts2 - prints every character of the string
 *
 * @str: is the chatacter to be printed
 */
void puts2(char *str)
{
	int see = 0;
	int p = 0;
	char *q = str;
	int z;

	while (*q != '\0')
	{
	q++;
	see++;
	}
	p = see - 1;
	for (z = 0; z <= p; z++)
	{
	if (z % 2 == 0)
	{
	_putchar(str[z]);
	}
	}
	_putchar('\n');
}
