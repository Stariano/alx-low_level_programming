#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */

void print_square(int size)
{
	int prnt, hw, columnlevel;
	columnlevel = size - 1;
	if (size <= 0)
		_putchar('\n');
	else
		for (prnt = 0; prnt < size; prnt++)
		{
			for(hw = prnt - 1; hw < columnlevel; hw++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
}
