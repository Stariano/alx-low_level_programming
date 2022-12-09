#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print from 1-10
 *
 *Return: Always 0 (success)
 */

int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0);
}
