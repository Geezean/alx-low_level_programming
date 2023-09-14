#include <stdio.h>

/**
 *main - entry point
 *
 *Return: always 0 (success)
 */

int main(void)
{
char i = 'a';

while (i <= 'z')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
