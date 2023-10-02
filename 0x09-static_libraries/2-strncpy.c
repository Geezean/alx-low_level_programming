#include "main.h"

/**
 * _strncpy - copies a string up to n
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int t;

	for (t = 0; t < n && src[t] != '\0'; t++)
		dest[t] = src[t];

	for ( ; t < n; t++)
		dest[t] = '\0';

	return (dest);
}
