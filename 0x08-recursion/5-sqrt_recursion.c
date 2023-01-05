#include "main.h"
/**
 *  sqrt_check - checks whetther a number has a natural sqrt
 *  @g: number
 *  @c: number
 *  Return: checked
 */

int sqrt_check(int g, int c)
{
	if (g * g == c)

		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number
 * Return: returns -1 if the number does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
