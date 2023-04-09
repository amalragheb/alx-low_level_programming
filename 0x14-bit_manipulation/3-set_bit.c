#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value at
 *
 * Return: If an error occurs - -1.
 * Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int xy;

	if (index > 63)
		return (-1);

	xy = 1 << index;
	*n = (*n | xy);

	return (1);
}
