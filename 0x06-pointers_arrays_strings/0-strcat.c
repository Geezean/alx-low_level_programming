#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int r = 0;
	int t = 0;

	while (dest[r] != '\0')
	{
		r++;
	}
	while (src[t] != '\0')
	{
		dest[r + t] = src[t];
		t++;
	}
	r++;
	return (dest);
}
