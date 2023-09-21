#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: pointer to input string.
 * Return: pointer to 1337
 */

char *leet(char *s)
{
	char lee[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lee[j] != '\0'; j++)
		{
			if (s[i] == lee[j])
			{
				s[i] = lee[j + 1];
				break;
			}
		}
	}
	return (s);
}
