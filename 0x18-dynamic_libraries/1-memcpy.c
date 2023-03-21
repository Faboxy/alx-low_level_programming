#include "main.h"
#include "string.h"
/**
* _memcpy - a function that copies memory area
* @n: the size of bytes to be copied
* @src: the source memory
* @dest: the destination address
* Return: returns a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
