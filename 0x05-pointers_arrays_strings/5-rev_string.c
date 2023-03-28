#include "main.h"
#include <string.h>
/**
 * rev_string - reverse the given string
 *
 * @s: is the string to be reversed
 */
void rev_string(char *s)
{
	int tough, a;
	char *start, *end, lean;

	tough = strlen(s);
	start = s;
	end = s;

	for (a = 0; a < tough - 1; a++)
	{
	end++;
	}
	for (a = 0; a < tough / 2; a++)
	{
	lean = *end;
	*end = *start;
	*start = lean;

	start++;
	end--;
	}
}
