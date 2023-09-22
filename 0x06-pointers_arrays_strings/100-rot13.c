#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char normal[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rotated[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; normal[j]; j++)
		{
			if (s[i] == normal[j])
			{
				s[i] = rotated[j];
				break;
			}
		}
	}
	return (s);
}
