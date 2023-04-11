#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 * If little-endian - 1.
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;
	/*this is a comment*/
	x = 1;
	c = (char *) &x;

	return ((int)*c); /*retrune value*/
}
