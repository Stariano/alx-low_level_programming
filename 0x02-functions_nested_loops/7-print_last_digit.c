#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @an : number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int an)
{
int res;

res = (an % 10);

if (res < 0)
{
res = (-1 * res);
}

_putchar(res + '0');
return (res);
}
