#include <stdio.h>
/**
 * _putchar - write character to standard output
 * * @c: the character to be written
 *
 * Return: on success 1, on error -1
 */
int _putchar(char c)
{
	return fputc(c, stdout) == EOF ? -1 : 1;
}
