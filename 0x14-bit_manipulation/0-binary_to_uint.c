#include "main.h"

/**
 *  string_converter_checker - a function that
 *  converts string to a number and check the conditions.
 *  @b: pointing to a string of 0 and 1 chars.
 *  Return: the converted number, or 0.
 */

int string_converter_checker(const char *b)
{
	int x = 0, i = 0, num = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] == '0' || b[x] == '1')
			num = num * 10 + (b[x] - 48);
		else
			return (0);
	}
	return (num);
}

/**
 * binary_to_uint - a function that
 *  converts a binary number to an unsigned int.
 *  @b: pointing to a string of 0 and 1 chars.
 *  Return: the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_value = 0;
	int true_num = 0, base = 1;

	true_num = string_converter_checker(b);
	while (true_num)
	{
		int last_digit = true_num % 10;

		true_num = true_num / 10;
		dec_value += last_digit * base;
		base = base * 2;
	}
	return (dec_value);
}
