#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number of the parameters
 *
 * Return: returns 0 if n is equal to 0 else returns the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);

	return (sum);
}
