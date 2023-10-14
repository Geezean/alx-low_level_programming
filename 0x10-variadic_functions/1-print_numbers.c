#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list ls;

	va_start(ls, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(ls, int));
		if (k < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ls);
}
