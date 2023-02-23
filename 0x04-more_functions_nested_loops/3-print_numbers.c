#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 *only use _putchar twice
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar(num);
	_putchar('\n');
}
