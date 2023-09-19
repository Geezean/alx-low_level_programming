#include "main.h"

/**
 *puts2 - prints every other character in a string starting with the first one
 *@str: input a string of characters
 */

void puts2(char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
	{
		if (r % 2 == 0)
			_putchar(str[r]);
	}
	_putchar('\n');
}
