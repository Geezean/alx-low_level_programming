#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: input string
 * Return: output string
 */

void _puts(char *str)
{
	int r = 0;

	while (str[r] != '\0')
	{
		_putchar(str[r]);
		r++;
	}
	_putchar('\n');
}
