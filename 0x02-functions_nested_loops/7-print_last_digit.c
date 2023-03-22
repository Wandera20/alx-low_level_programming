#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j < 0)
	{
	j = -1;
	}
	_putchar('0' + j);
	return (j);
}
