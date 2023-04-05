#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: is the number
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0 || n == 1)
	{
	return (n);
	}
	z = _sqrt_recursion(n / 2);

	if (n == z * z)
	{
	return (z);
	}
	else if (n > z * z)
	{
	return (z + 1);
	}
	else
	{
	return (z - 1);
	}
}
