#include <stdio.h>
/**
 * main - alphabets in both cases
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c, l;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	for (l = 'A'; l <= 'Z'; l++)
	putchar(l);
	putchar('\n');
	return (0);
}


