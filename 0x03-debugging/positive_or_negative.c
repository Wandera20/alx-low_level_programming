#include "main.h"
/**
 * code -checks whether i is positive or negative
 * @i: is the value checked
 *
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i < 0)
	printf("%d is negative\n", i);
	else if (i > 0)
	printf("%d is postive\n", i);
	else
	printf("%d is zero\n", i);
}
