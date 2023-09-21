#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to print
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int r = 0;
	int t;

	while (dest[r] != '\0')
	{
		r++;
	}
	for (t = 0; t < n && src[t] != '\0'; t++)
	{
		dest[r] = src[t];
		t++;
	}
	return (dest);
}
