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
		printf("\nis Positive %d", n);
	}
	else if (n == 0)
	{
		printf("\nis Zero %d", n);
	}
	else
	{
		printf("\nis Negetive %d", n);
	}
	return (0);
}
