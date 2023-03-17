#include <stdio.h>
/**
 * main - printing numbers using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	putchar(i);
	putchar('\n');

	return (0);
}
