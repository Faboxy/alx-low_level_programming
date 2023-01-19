#include <unistd.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * _putchar - prints a charcter
 * @c: the charcter to be printed
 *
 * Return: always 1 on success else -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}



