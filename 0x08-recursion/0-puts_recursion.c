#include "main.h"

/**
 *_puts_recursion - prints a string followed by a new line
 *@str: input string
 * return: string to be printed
 */

void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*str + 1);
	_puts_recursion(str + 1);
}

