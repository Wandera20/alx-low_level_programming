#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: name of array
 * @n: number of elements in array
 * Return: n and a
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
	printf("%d, ", a[j]);
	}
	if (j == (n - 1))
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
