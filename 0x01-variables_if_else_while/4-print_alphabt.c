#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Description - A program that prints the alphabeth in lower case
 * Return: Always 0 (Success)
 * Return 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
