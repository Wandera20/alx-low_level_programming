#include "main.h"
/**
 * char *_strcpy - a function that copies a string pointed by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int x = 0;

	while (*(src + j) != '\0')
	{
	j++;
	}
	for (; x < j; x++)
	{
	dest[x] = src[x];
	}
	dest[j] = '\0';
	return (dest);
}
