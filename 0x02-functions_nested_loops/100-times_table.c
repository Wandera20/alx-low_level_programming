#include "main.h"
#include <stdio.h>
/**
 * print_time_table - prints n times table
 * @n: is the number of times
 *
 * Return: multiple tables
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n <  0 || n > 15)
	return;
	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	k = i * j;
	if (j == 0)
	printf("%d", k);
	else
	printf(", %3d", k);
	}
	printf("\n");
	}
}
