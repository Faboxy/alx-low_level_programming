#include "main.h"
/**
 * _pow_recursion - function that returns the value of
 * x raised to the power of
 * @x: the base number
 * @y: number raised as a power
 * Return: returns -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	if (y == 0)

		return (1);

	return (x * _pow_recursion(x, y - 1));
}
