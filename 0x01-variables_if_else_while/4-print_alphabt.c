#include <stdio.h>
/**
 * main - Entry point and returns 0
 * Return: 0 Success
 */
int main(void)
{
	int n;
	int q = 'q';
	int e = 'e';

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != q && n != e)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
