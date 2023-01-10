#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply two numbers
* @argc: arguement count
* @argv: array of pointers to arguement strings
* Return: result of multiplication or 1
**/
int main(int argc, char *argv[])
{
	int i, a, sum;
	if (argc <= 2)
	{
		printf("Error\n"); 
		return (1);
	}
	sum = 1;
	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		sum *= a;
	}
	printf("%d\n", sum);
	return (0);
	}
