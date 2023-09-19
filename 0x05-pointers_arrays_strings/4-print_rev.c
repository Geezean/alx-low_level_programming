#include "main.h"

/**
 * print_rev - prints a string, in reverse,followed by a new line
 * @str: input string
 * Return: reversed string
 */

void print_rev(char *str)
{
	int r = 0;

	while (str[r])
	{
		r++;
	}
	while (r > 0)
	{
		_putchar(str[r - 1]);
		r--;
	}
	_putchar('\n');
}
