#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* Return: 0
*/
void print_alphabet(void);

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
