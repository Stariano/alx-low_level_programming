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
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x == 'q' || x == 'e')
{
continue;
}
putchar(x);
}
putchar('\n');
return (0);
}
