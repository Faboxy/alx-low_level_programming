#include "main.h"
/**
* _memset  - a function that fills the first n bytes of memory area
* @n: size of the memory area to be filled
* @s: a pointer to the memory area
* @b: the constant byte to be used in the filling
* Return: returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
