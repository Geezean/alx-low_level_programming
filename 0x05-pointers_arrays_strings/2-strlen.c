#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: input pointer
 * Return: integer
 */
int _strlen(char *s)
{
	int r;

	for (r = 0; s[r] != '\0'; r++)
	{}
	return (r);
}
