#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: number of elements in the array array
 * @array: array of int
 * @cmp: pointer to the function to be used to compare values
 * function does not return 0
 * Return: -1 if no element matches and 1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
