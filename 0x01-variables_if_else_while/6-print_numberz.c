#include <stdio.h>
/**
 * main - printing numbers using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	putchar(j);
	putchar('\n');

	return (0);
}
