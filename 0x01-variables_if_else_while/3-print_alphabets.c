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
int x;
for (x='a'; x <= 'z'; x++)
{
putchar(x);
}
for (int x='A'; x <= 'Z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
