#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void);
{
int aa, num;

num = 0;

while (num <= 10)
{
for (aa = 'a'; aa <= 'z'; aa++)
{
_putchar(aa);
}
num++;
}
_putchar('\n');
}
