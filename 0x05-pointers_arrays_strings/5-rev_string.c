#include "main.h"

/**
 * rev_string - function which reverses a string.
 * @s: input string
 * Return: reversed string
 */

void rev_string(char *s)
{
	int j = 0;
	int k = 0;
	char l;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	while (j > k)
	{
		l = s[k];
		s[k] = s[j];
		s[j] = l;
		j--;
		k++;
	}
}
