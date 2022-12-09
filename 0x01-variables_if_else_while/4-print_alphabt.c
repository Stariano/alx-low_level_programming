#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print A-Z in small then remove Q OR E from the arrangement
 *
 *Return: Always 0 (success)
 */

int main(void)
{
for (int x='A'; x <= 'Z'; x++)
{
if (x == 'Q' || x == 'E')
{
continue;
}
char small = tolower(x);
putchar(small);
}
return (0);
}
