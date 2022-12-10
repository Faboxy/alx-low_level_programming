#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Description - A program that prints all possible combination of
 * All single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
