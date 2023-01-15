#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - a program that prints minimum numbner of coins to make change
 * for an amount of money
 * @args: parameter entry
 * @argv: one number of arguments
 * Return: return 0 on one number of arguments
 */
int main(int args, char *argv[])
{
	int c, coins = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	{
		printf("0\n");
		return (0);
	}
	for (; c >= 0;)
	{
		if (c >= 25)
			c -= 25;
		else if (c >= 10)
			c -= 10;

		else if (c >= 5)
			c -= 5;
		else if (c >= 3)
			c -= 3;
		else if (c >= 1)
		c -= 1;
		else
		break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
