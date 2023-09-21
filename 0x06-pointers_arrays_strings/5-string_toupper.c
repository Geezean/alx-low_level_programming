#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @s: pointer to the string to convert
 * Return: the converted string.
 */

char *string_toupper(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] -= 'a' - 'A';
		}
	}
	return (s);
}
