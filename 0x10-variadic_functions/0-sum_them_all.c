#include <stdarg.h>

/**
  * sum_them_all - returns the sum of all its parameters
  * @n: number of arguments
  * @...: variable list of arguments
  * Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int k, total;
	va_list l;

	if (n == 0)
		return (0);
	va_start(l, n);
	for (k = total = 0; k < n; k++)
	{
		total += va_arg(l, int);
	}
	va_end(l);
	return (total);
}
