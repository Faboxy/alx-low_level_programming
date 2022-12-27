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
int dest = 0, dest_lens = 0;

while (dest[index++])
dest_lens++;

for (index = 0; src[index] && index < n; index++)
dest[dest_lens++] = src[index];

return (dest);
}
