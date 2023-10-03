#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers
 * @argc: The number of arguments passed
 * @argv: The argument vector
 * Return: If 1 of the numbers are non-digits - 1 else - 0.
 */

int main(int argc, char *argv[])
{
	int n, digit, total = 0;

	for (n = 1; n < argc; n++)
	{
		for (digit = 0; argv[n][digit]; digit++)
		{
			if (argv[n][digit] < '0' || argv[n][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[n]);
	}
	printf("%d\n", total);
	return (0);
}
