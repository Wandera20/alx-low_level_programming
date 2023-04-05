#include "main.h"
#include <math.h>
/**
 * is_prime_number - prints -1 if number is prime and 0 otherwise
 * @n: input number
 * Return: -1 if n is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	int sqrt_n;
	int i;

	if (n <= 1)
	{
	return (0);
	}
	sqrt_n = sqrt(n);

	for (i = 2; i <= sqrt_n; i++)
	{
	if (n % i == 0)
	{
	return (0);
	}
	}
	return (1);
}
