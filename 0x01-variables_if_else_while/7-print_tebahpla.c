#include <stdio.h>
/**
 * main - smile in the mirror
 *
 * Return: 0 (success)
 */
int main(void)
{
	char down;

	for (down = 'z'; down >= 'a'; down--)
	putchar(down);
	putchar('\n');

	return (0);
}
