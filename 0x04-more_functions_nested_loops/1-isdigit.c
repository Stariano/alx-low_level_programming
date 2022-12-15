#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digits[1-9] character
 * @c: int to receive data
 * Return: 1 / 0
 */
int _isdigit(int c)
{
        int a = isdigit(c);

        if (a == 0)
                return (a);
        else
                return (1);
}

