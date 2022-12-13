#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 */
void jack_bauer(void)
{
int digit1, digit2, digit3, digit4;

for (digit1 = 0; digit1 <= 2; digit1++)
{
for (digit2 = 0; digit2 <= 9; digit2++)
{
for (digit3 = 0; digit3 <= 5; digit3++)
{
for (digit4 = 0; digit4 <= 9; digit4++)
{
_putchar((digit1 % 10) + '0');
_putchar((digit2 % 10) + '0');

_putchar(':');
_putchar((digit3 % 10) + '0');
_putchar((digit4 % 10) + '0');
_putchar('\n');

if ((digit1 == 2 && digit2 == 3 && digit3 == 5 && digit4 == 9))
{
break;
}
}

if ((digit1 == 2 && digit2 == 3 && digit3 == 5 && digit4 == 9))
{
break;
}
}

if ((digit1 == 2 && digit2 == 3 && digit3 == 5 && digit4 == 9))
{
break;
}
}

}

}

