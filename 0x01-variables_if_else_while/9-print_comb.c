#include <stdio.h>
/**
 * main - printing combinations
 *
 * Return: 0 (success)
 */
int main(void)
{
	int w;

	for (w = '0'; w <= '9'; w++)
	{
	putchar(w);
	if (w != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
