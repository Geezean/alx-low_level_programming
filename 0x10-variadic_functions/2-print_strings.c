#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * print_strings - print strings
  * @separator: the string to be printed between the strings
  * @n: nmber of items to print
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *str;
	va_list strs;

	if (separator == NULL)
		separator = "";

	va_start(strs, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (k < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strs);
}
