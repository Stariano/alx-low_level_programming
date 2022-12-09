#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print from A-Z in a reverse order
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int x;
for (x = 'z'; x >= 'a'; x--)
putchar(x);

putchar('\n');
return (0);
}
