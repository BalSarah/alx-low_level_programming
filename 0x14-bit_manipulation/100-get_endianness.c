#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int t;
	char *z;

	t = 1;
	z = (char *)&t;
	return (*z);
}
