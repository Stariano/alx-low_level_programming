#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print from 1-9*
 *Return: Always 0 (success)
 */

int main(void)
{

int x;

x = 0;
while (x <= 9)
{
putchar((x % 10) + '0');
if(x < 9)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
