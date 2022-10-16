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
		printf(n, "is Positive %d\n");
	}
	else if (n == 0)
	{
		printf(n, "is Zero %d\n");
	}
	else
	{
		printf(n, "is negetive %d\n");
	}
	return (0);
}
