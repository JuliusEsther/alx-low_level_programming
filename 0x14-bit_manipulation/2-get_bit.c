#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the of a bit at a given index in a decimal
 * @n: number to search out
 * @index: index of a bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 53)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
