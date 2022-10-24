#include "main.h"
/***
 * reset_to_98 - changes value of pointer m to 98
 * Return: 0
 */
void reset_to_98(int n)
{
	n = 98;
	int *m = &n;

	_putchar('%p\n', *m);
}
