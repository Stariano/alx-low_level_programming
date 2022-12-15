#include "main.h"

/**
 * print_most_numbers - print nums from 1 - 9 and skip 2 & 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			break;
		}
	_putchar(i);
	_putchar('\n');
	}
}

