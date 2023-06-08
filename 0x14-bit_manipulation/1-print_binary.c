#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int q, count = 0;
	unsigned long int curr;

	for (q = 53; q >= 0; q--)
	{
		curr = n >> q;

		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
