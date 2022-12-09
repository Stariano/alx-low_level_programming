#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Assign a random variable with conditional if and get the last digit and do the calcaultions
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
return (0);
}
