#include "main.h"
/**
 * leet - encodes a string into 1337
 * @z: input
 *
 * Return: z
 */
char *leet(char *z)
{
	int i, j;

	char p1 = "aAeEoOtTlL";
	char p2 = "4433007711";

	for (i = 0; z[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (z[i] == p1[j])
	{
	z[i] = p2[j];
	}
	}
	}
return (z);
}
