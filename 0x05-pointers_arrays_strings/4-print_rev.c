#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: argurment
 * Return: string
 */
void print_rev(char *s)
{
	int j = 0;

	while (*(s + j) != '\0')
	{
		j++;
	}
	while (j)
	{
		_putchar(s[--j]);
	}
	_putchar('\n');
}
