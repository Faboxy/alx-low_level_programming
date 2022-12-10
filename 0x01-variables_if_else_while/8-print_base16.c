#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * DEscription - A program that prints all the base 16 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		putchar(nums);
	}
	for (nums = 'a'; nums <= 'f'; nums++)
	{
		putchar(nums);
	}
	putchar('\n');
	return (0);
}
