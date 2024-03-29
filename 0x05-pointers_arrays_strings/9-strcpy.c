#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: input char
 * @src: input char
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i;

	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
