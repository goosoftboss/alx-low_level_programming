#include <stdio.h>
#include "main.h"
/**
 * _islower - lower alphabet
 * @c : argumet to be checked
 * Return: 1 - Successful, 0 - otherwisw
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
