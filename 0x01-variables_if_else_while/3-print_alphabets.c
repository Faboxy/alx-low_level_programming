#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
