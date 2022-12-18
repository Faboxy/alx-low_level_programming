#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9 except 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
int number;

for (number = 48; number < 58; number++)
{
if ((number == 48 || (number == 52))
{
continue;
}
_putchar(number);
}
_putchar (10);
}
