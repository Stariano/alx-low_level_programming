#include "main.h"

/**
 * print_most_numbers - print nums from 1 - 9 and skip 2 & 4
 */

void print_most_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
if (i == 2 || i == 4)
continue;
_putchar(i);

_putchar('\n');
}
