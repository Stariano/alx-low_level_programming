#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int firstnum, secondnum;
	char *c;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	firstnum = atoi(argv[1]);
	secondnum = atoi(argv[3]);
	c = argv[2];

	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*c == '/' && secondnum == 0) || (*c == '%' && secondnum == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(c)(firstnum, secondnum));
	return (0);
}
