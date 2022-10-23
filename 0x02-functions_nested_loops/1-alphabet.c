#include <stdio.h>
/**
* print_alphabet - Entry point
* Return: 0
* Description - the function will return a character
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
