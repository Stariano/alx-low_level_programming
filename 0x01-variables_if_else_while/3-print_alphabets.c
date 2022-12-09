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

int mm;
for (mm='A'; mm <= 'Z'; mm++)
{
putchar(mm);
}
putchar('\n');
return (0);
}
