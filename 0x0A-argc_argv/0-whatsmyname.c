#include <stdio.h>
/**
 * main - write a program that prints its name followed by a new line
 * if you rename it, it will print the new name of the program without
 * haveing to compile it again
 * you should not remove the path before the name of the program
 * @argc: this the argument cpount
 * @argv: this is the argument vector
 *
 * Return: return to 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
