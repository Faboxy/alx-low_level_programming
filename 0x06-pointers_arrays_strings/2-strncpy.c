#include "main.h"

/**
* _strncpy - copies a string
* terminating null byte, using at most a inputed number of bytes
* if the lemght of the source is less than the maximum byte number
* the remainder of the destination string is filled with null byte
* works identically to the standard library function strncpy
* @dest: buffer storing the string copy
* @src: source string
* @n: max number of byte copied
* Return: void
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
