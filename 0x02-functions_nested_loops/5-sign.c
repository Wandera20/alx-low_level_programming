#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: to be checked for the sign
 *
 * Returns: Always 1 if n is greater than zero
 * Always 0 if n is zero
 * Always -1 if  n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
