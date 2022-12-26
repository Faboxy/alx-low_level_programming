#include "main.h"

/**
* _strncat - Entry point
* @dest: input value
* @src: input value
* @n: input value
* Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0'i)
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
