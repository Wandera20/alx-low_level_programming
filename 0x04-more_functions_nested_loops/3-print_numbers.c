#include "main.h"
/**
 * print_number - prints numbers from 0 t0 9
 * @a: integer that prints numbers
 *
 * Return: numbers from 0 to 9
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	_putchar(a + '0');
	}
	_putchar('\n');
}
