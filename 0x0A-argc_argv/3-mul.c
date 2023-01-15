#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * assume the result can be stored in an integer
 * if the program does not receive two arguments it should print an error
 * @argc: the argument count
 * @argv: the argument vector
 * Retyurn: return an erroe if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int index, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}

