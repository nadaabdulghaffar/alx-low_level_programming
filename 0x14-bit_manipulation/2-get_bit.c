#include "main.h"

/**
 * get_bit()-returns the value of a bit at a given index.
 * @n: the number
 * @index: the index we searched for
 *
 * Return:the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int total = sizeof(n) * 8;

	if (index >= total)
		return (-1);

	return ((n >> index) & 1);
}

