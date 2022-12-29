#include "main.h"

/**
* puts2 - prints every character in a string starting from the first
* @str: checked
* Return 0
*/
void	puts2(char *str)
{
int i = 0;

while (str[i])
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
