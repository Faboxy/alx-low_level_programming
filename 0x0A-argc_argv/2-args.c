#include <stdio.h>
/**
 * main - a program that prints a;ll the arguments its receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; ++n)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
