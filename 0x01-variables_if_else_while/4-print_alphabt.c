#include <stdio.h>
#include <stdlib.h>
/**
 * More header goes here
 * Description - A program that prints the alphabeth in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z');
	{
		if (c != 'e' && c != 'q');
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
