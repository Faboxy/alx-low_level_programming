#include "main.h"

/**
* swap_int - Entry point
* Description: swaps the value of two integers
* @a: value to be swapped
* @b: value to swapped
* Return: 0
*/

void swap_int(int *a, int *b)
{
int swap;

swap = *a;

*a = *b;

*b = swap;
}
