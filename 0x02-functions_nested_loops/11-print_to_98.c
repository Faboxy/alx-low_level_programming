#include "main.h"

/**
 * print_to_98 - prints all natural nums from 0 to 98
 * @n: the numbers to be printed
 * Return: alwayas 0
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%i, ", n);
	}
	printf("98");
	putchar('\n');
}
