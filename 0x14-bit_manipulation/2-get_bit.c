#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @in: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int in)
{
	int bit_v;

	if (in > 63)
		return (-1);

	bit_v = (n >> in) & 1;

	return (bit_v);
}
