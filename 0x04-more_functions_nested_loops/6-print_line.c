#include "main.h"

/**
 * print_line - print _ until you hit m
 * @n : number of times _ should be printed
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
