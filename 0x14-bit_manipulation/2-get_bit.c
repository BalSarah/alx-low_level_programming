#include "main.h"

/**
 * get_bit - it takes the value of a bit of index in a deci
 * @n: search for index or number
 * @index: numbers of bit
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit values;

	if (index > 63)
		return (-1);
	bit values = (n >> index) & 1;

	return (bit values);

}
