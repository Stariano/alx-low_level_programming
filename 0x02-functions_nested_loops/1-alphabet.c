#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet(void)
{
int aa;

for (aa = 'a'; aa <= 'z'; aa++)
{
_putchar(aa);
}
_putchar('\n');
}
