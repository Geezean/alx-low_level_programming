#include "main.h"

/**
 *puts_half - print the second half of the string or the second (n-1)/2 strings
 *@str: string input
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
