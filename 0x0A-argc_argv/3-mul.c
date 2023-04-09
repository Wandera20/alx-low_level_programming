#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the mulple of two argument numbers
 * @argc:input
 * @argv: input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, n3;

	n1 = 0;
	n2 = 0;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	n3 = n1 * n2;

	printf("%d\n", n3);
	return (0);
}

