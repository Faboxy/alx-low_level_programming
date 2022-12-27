#include "main.h"

/**
* _strncat - concatenates two strings
* using at most n-bytes from src
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n) 
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = dest[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
