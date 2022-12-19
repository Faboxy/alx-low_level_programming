#include "main.h"

/**
* more_numbers - Entry point
* Description: prints numbers 0 to 14 ten times
* Return: void
*/

void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)
_putchar(j / 10 + '0');
_putchar(j % 10 = '0');
}
_putchar('\n');
}
