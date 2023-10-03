#include <stdio.h>

/**
 * main - Prints all arguments passed into it
 * @argc: The argument count
 * @argv: The argument vectors
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}

