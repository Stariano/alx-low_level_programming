#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *print = "_putchar";

while (*print)
{
_putchar(*print);
print++;
}
_putchar('\n');

return (0);
}
