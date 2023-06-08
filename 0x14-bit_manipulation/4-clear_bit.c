#include "main.h"
#include<stdlib.h>

/**
 * clear_bit - set 0 as the value of a given bit
 * @n: pointer of the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
