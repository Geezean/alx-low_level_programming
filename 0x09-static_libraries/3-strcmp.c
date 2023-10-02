#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: the difference between the first character that are not the same
 */

int _strcmp(char *s1, char *s2)
{
	int k = 0;

	while (s1[k] == s2[k] && s1[k] != '\0')
		k++;
	return (s1[k] - s2[k]);
}
