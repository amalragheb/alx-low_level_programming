#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 * @j: takes number input
 * Return: last digit,
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}