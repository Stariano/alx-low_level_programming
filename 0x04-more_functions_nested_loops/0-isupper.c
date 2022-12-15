#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: int to receive data
 * Return: 1 / 0
 */
int _isupper(int c)
{
	int a = isupper(c);

	if (a == 0)
		return (a);
	else
		return (1);
}
