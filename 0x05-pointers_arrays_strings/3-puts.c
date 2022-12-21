#include "main.h"

/**
* _puts - Entry point
* @str: prints to stdout with a new line
* Return: 0
*/

void _puts(char *str)
{

if (*str)
{
while (*str)
{
_putchar(*str++);
}
}
_putchar('\n');
}
