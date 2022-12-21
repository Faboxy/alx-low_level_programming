#include "main.h"

/**
* _puts - prints to stdout with a new line
* @str: checked
* Return: 0
*/

void _puts(char *str)
{

if (str)
{
while (*str)
{
_putchar(*str++);
}
}
_putchar('\n');
}
