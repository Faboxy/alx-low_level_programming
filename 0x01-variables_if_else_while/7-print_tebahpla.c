#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Description - A program that writes the alphabets in reverse order
 * In lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar (c);
		c--;
	}
	putchar('\n');
	return (0);
}
