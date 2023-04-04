#include "main.h"
/**
 * _memcpy - copies bytes from one memory to another
 * @n: number of bytes to be copied
 * @src: memory to copy from
 * @dest: memory to store copied bytes
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k, i;

	i = n;

	for (k = 0; k < i; k++)
	{
	dest[k] = src[k];
	n--;
	}
	return (dest);
}
