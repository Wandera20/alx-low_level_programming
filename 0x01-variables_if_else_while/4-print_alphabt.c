#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - eliminating some letters from alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a, e, q;

	e = 'e';
	q = 'q';

	for (a = 'a'; a <= 'z'; a++)
	{
	if (a != e && a != q)
	putchar(a);
	}
	putchar('\n');
	return (0);
}
