#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - add positive numbers
* @argc: arguement count
* @argv: array of pointers to arguement strings
* Return: result of addition or 1
**/
int main(int argc, char *argv[])
{
	int i, sum, number;

	number = 0;
	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				number = atoi(argv[i]);
				sum += number;
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
