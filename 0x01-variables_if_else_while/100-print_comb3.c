#include <stdio.h>
/**
 * main - print comb3
 *
 * Return: 0 (success)
 */
int main(void)
{
	int w, m;

	for (w = '0'; w < '9'; w++)
	{
	for (m = w + 1; m <= '9'; m++)
	{
	if (m != w)
	{
	putchar(m);
	putchar(m);
	if (w == '8' && m == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
