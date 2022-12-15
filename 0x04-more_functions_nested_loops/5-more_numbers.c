#include "main.h"

/**
 * more_numbers - A function who print 10 times the numbers, from 0 to 14
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */

void more_numbers(void)
{
	int i, m;

	for (i = 0; i <= 10; i++)
	{
		for (m = 0; m <= 14; m++)
		{
		_putchar(m);
		_putchar('\n');
		}
	}
}


