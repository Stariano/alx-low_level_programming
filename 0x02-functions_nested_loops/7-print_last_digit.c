#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int an)
{

if (an < 0)
{
an = an * -1;
}

an = an % 10;

_putchar(an + '0');
return (an);
}
