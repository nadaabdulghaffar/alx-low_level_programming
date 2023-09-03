#include "main.h"

/**
 * binary_to_uint() - function converts a binary number to an unsigned int
 * @b:is pointing to a string of 0 and 1 char
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_number = 0;

	if (b == NULL)
		return (0);

	for (int i  = 0; b[i]; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			dec_number = dec_number * 2 + (b[i] - '0');
		else
			return (0);
	}

	return (dec_number);
}


