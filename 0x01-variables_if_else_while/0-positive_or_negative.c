#include <stdlib.h>
#include <time.h>

/**
 * main - Assign a random variable with conditional if
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
		printf("is positive\n");
} if else (n == 0){
	printf("is zero\n")
}else{
	printf("is negative\n")
}
	return (0);
}
