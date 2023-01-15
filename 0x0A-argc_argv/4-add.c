#include <stdio.h>
/**
 * main - a program that adds positive numbers
 * if no number is passed to the program, print 0 followed by a new line
 * if one of the number contains non digit, print Error
 * assume all numbers are store in an int
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */
int main(argc, char *argv[])
{
	int sum = o, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			int b;
			char *str;

			str = argc[i];
			for (b = 0; str[b] != 'o'; ++b)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; ++1)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
