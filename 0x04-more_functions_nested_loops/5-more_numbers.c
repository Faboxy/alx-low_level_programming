#include "main.h"

/**
* more_numbers - Entry point
* Description: prints numbers 0 to 14 ten times
* Return: void
*/

void more_numbers(void)
{
int i, tens, units, row;

for (row = 1; row <= 10; row++)
{
for (i = 0; i < 15; i++)
{
tens = i / 10;
units = i % 10;
if (i > 9)
_putchar(tens + '0');
_putchar(units + '0');
}
_putchar('\n');
}
}
