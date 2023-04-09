#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int binary = 0;

	if (b[binary] == '\0')
		return (0);

	while ((b[binary] == '0') || (b[binary] == '1'))
	{
		value <<= 1;
		value += b[binary] - '0';
		binary++;
	}

	return (value);
}

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
