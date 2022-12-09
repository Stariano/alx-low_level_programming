#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print A-Z in both small and big alphas
 *
 *Return: Always 0 (success)
 */

int main(void)
{
for (int x='A'; x <= 'Z'; x++)
{
char small = tolower(x);
putchar(small);
}
for (int x='A'; x <= 'Z'; x++)
{
putchar(x);
}
return (0);
}
