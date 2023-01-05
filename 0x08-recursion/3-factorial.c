#include "main.h"
/**
 * factorial - this function returns the factorial of a gfiven number
 * @n: the number
 * Return: returns -1 to indicate an error if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);

	if (n == 0)

		return (1);
	return (n * factorial(n - 1));
}
