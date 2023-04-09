#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: input
 * @argv: input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, n, sum;

	i = 0;
	j = 0;
	sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (i = 0; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	n = atoi(argv[i]);
	if (n <= 0)
	{
	continue;
	}
	sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
