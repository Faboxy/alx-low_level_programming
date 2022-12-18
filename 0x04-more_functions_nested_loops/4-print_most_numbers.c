#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9 except 2 and 4
 * @i: the numbers to be printed
 * Return: 0
 */

void print_most_numbers(void)
{
int i;

int i = 0;
while (i < 10 && i != 2 || i != 4)
i++;
{
_putchar (i + '0');
}
_putchar ('\n');
}
