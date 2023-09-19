#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input pointer to string
 * Return: converted integer
 */

int _atoi(char *s)
{
	int k = 0;
	unsigned int l = 0;
	int m = 1;

	for (k = 0; s[k] != '\0'; ++k)
	{
		if (k[s] == '-')
		{
			m *= -1;
		}
		if (k[s] >= '0' && k[s] <= '9')
		{
			l = l + s[k] - '0';
			if ((*(s + (k + 1)) >= '0') && (*(s + (k + 1)) <= '9'))
				l *= 10;
			else
				break;
		}
	}
	return (l * m);
}
