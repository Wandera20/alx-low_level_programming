#include <stdio.h>
/**
 * main - printing base16
 *
 * Return: 0 (success)
 */
int main(void)
{
	int w;
	char up;

	for (w = '0'; w <= '9'; w++)
	putchar(w);

	for (up = 'a'; up <= 'f'; up++)
	putchar(up);
	putchar('\n');

	return (0);
}
