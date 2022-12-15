#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */

void print_square(int size)
{
	int prnt, hw, columnlevel;
	if (size <= 0)
		_putchar('\n');
	else
		for (prnt = 0; prnt < size; prnt++)
		{
			for(hw = 0; hw < size; hw++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
