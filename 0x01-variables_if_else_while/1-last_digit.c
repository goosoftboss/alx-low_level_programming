#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of n and is greater than %d\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of n and is %d\n", n);
	}
	else
	{
		printf("Last digit of n and is less than 6 and not 0%d\n", n);
	}
	return (0);
}
