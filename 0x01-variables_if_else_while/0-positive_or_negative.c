#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is Positive %d\n", n);
	}
	else if (n == 0)
	{
		printf("is Zero %d\n", n);
	}
	else
	{
		printf("is negetive %d\n", n);
	}
	return (0);
}
