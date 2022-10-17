#include <stdio.h>
/**
 * main - Entry point
 * Return 0
 */
int main(void)
{
	int n;
	int q = 'q';
	int e = 'e';

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
