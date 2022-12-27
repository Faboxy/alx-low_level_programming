#include "main.h"

/**
* reverse_array - rverse an array of a content of integers
* @a: input array value
* @n: number of elements
* Return: void
*/
void reverse_array(int *a, int n)
{
int tmp, index;

for (index = n - 1; index > n / 2; index--)
{
tmp = a[n - 1 - index];
a[index] = tmp;
}
}
