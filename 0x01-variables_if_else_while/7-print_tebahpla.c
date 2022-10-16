#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n;
	int smal_n;

	for (n = 'A'; n <= 'Z'; n++)
	{
		smal_n = tolower(n);
		putchar(smal_n);
	}
	putchar('\n');
	return (0);
}
