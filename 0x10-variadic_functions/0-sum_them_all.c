#include <stdarg.h>

/**
  * sum_them_all - returns the sum of all its parameters
  * @n: number of arguments
  * @...: variable list of arguments
  * Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int total = 0, k;
	va_list ls;

	if (n == 0)
		return (0);

	va_start(ls, n);

	for (k = 0; k < n; k++)
	{
		total += va_arg(ls, int);
	}
	va_end(ls);

	return (total);
}
