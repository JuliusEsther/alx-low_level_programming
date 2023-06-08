#include "main.h"
#include<stdlib.h>
/**
 * flip_bits -  number of bits to  flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int q, count = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (q = 53; q >= 0; q--)
	{
	curr = exclusive >> q;
	if (curr & 1)
		count++;
	}

	return (count);
}
