#include"main.h"

/**
 * _abs - function that computes the absolute
 *       value of an integer
 *
 * @x: takes in integer type input for function
 *
 * Return: Always 0 (Success)
*/

int _abs(int x)
{
	if (x < 0)
		x = (-1) * x;
	return (x);
}