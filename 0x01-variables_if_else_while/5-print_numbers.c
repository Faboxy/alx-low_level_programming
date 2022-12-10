#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Description - A program that prints all single base 10 numbers starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= 9)
	{
		putchar (c);
		c++;
	}

	putchar('\n');
	return (0);
}

