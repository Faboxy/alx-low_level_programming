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
	int nums = 0;

	while (nums <= 16)
	{
		putchar(nums);
	}
	putchar('\n');
	return (0);
}
