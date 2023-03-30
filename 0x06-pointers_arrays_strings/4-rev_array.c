#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: the array to be reversed
 * @n: number of members in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
	j = a[i];
	a[i] =  a[n];
	a[n] = j;
	}
}
