#include "main.h"

/**
 *_print_rev_recursion - prints a string in reverse
 *@str: an input string
 *
 *return: reversed string
 */

void _print_rev_recursion(char *str)
{
	if (*str == '\0')
	{
		return;
	}
	_print_rev_recursion(str + 1);
	_putchar(*str);
}
