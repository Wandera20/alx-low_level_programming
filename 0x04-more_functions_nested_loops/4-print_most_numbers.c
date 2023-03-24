#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 minus 2 and 4
 *
 * Return: numbers from 0 t 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
	if (a == 2 || a == 4)
	{
	continue;
	}
	else
	{
	_putchar(a + '0');
	}
	}
	_putchar('\n');
}
