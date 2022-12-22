#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - prints a string in treverse
* @s: checked
* Return: nothing
*/

void print_rev(char *s)
{
size_t len = strlen(str);

for (size_t i = len; i > 0; i--)
{
putchar(str[i-1]);
}
putchar('\n');
}
