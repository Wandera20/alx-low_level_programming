#include "main.h"
/**
 * factorial - prints factorial of n
 * @n: input number
 * Return: -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
