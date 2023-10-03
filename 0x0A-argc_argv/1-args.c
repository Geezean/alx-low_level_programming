#include <stdio.h>

/**
 * main - prints the number of arguments passed onto the program.
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Always (0) success.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
