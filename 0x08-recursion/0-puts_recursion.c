#include "main.h"
/**
 * _puts_recursion - function that prints a string followed by a new line
 * @s: the string
 * Return: returns the string s
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_Putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}

