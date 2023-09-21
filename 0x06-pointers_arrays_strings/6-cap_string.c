#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to input string.
 * Return: Returns pointer to capitalized string.
 */

char *cap_string(char *s)
{
	int a = 0;

	if (s[a] >= 97 && s[a] <= 122)
	{
		s[a] -= 32;
	}
	while (s[a] != '\0')
	{
		if (s[a] == ' ' || s[a] == '\n' || s[a] == '\t'
		    || s[a] == ',' || s[a] == ';' || s[a] == '.'
		    || s[a] == '!' || s[a] == '?' || s[a] == '"'
		    || s[a] == '(' || s[a] == ')' || s[a] == '{'
		    || s[a] == '}')
		{
			if (s[a + 1] >= 97 && s[a + 1] <= 122)
			{
				s[a + 1] -= 32;
			}
		}
		a++;
	}
	return (s);
}
