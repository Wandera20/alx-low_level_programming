#include <stdio.h>
/**
 * main -start point
 *
 * Return: o (success)
 */
int main(void)
{
	int j, sum = 0;

	for (j = 0; j < 1024; j++)
	{
	if (j % 3 == 0 || j % 5 == 0)
	{
	sum += j;
	}
	}
	printf("%d\n", sum);
	return (0);
}
