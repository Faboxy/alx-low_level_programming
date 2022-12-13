#include "main.h"

/**
 * print_alphabet_x10 - A program that prints x10 of the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char x;

	while (count++ <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);

		_putchar('\n');
	}

}
