#include "main.h"

/**
 * print_line - print _ until you hit m
 * @n : number of times _ should be printed
 */

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; m <= n; m++)
		{
			_putchar('_');
		}
	}
	
	_putchar('\n');
}

