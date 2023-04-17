#include <stdio.h>
/**
 * main - prints a file from which it was compiled from
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
