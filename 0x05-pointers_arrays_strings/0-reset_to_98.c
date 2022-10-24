#include <stdio.h>
#include "main.h"
/***
 * main - calls the function reset_to_98
 * reset_to_98 - changes value of pointer m to 98
 * Return: 0
 */
int reset_to_98(int n)
{
	n = 98;
	int *m = &n;

	_putchar('%p\n', *m);
}

int main(void)
{
	reset_to_98();
	return (0);
}
