#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * return: always 0
 */

void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
