#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to the duplicate new string
 * @str: char
 * Return: NULL if strr is Null, pointer, NULL if memory is insufficient
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, r;

	r = 0;
	i = 0;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[i] != '\0')
	{
	i++;
	}

	ptr = malloc((i + 1) * sizeof(char));

	if (ptr == NULL)
	{
	return (NULL);
	}

	for (r = 0; str[r]; r++)
	{
	ptr[r] = str[r];
	}
	return (ptr);
}
