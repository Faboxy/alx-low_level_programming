#include <stdio.h>
/**
 * main - program that prints number of arguments passed to it
 * @args: the argument count
 * @argv: the argument vector
 *
 * Return: return to 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
