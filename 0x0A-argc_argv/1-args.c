#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed to it
 *
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: return status always 0
 */
int main(int args, char *argv[])
{
printf("%d\n", args - 1);
(void)argv;
return (0);
}

