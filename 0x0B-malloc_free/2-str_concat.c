#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;

	i = 0, j = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
	i++;
	while (s2[j] != '\0')
	j++;
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
	return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
	ptr[i] = s1[i];
	i++;
	}
	while (s2[j] != '\0')
	{
	ptr[i] = s2[j];
	i++, j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

