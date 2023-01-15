#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - a program that adds positive numbers
 * if no number is passed to the program, print 0 followed by a new line
 * if one of the number contains non digit, print Error
 * assume all numbers are store in an int
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			int b;
			char *str;

			str = argv[i];
			for (b = 0; str[b] != '\0'; ++b)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; ++i)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
