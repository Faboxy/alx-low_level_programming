#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * assume the result can be stored in an integer
 * if the program does not receive two arguments it should print an error
 * @argc: the argument count
 * @argv: the argument vector
 */
int main(int argc, char *argv[])
{
	int index, multiplication, atoi;

	multiplication = 1;
	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * (argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}

