#include "main.h"
#include <stddef.h>

/**
* _strcat - function that concatenates rtwo strings
* @src: cadena a copiar@dest destino de la cadena.
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
size_t i, j;
for (i = 0; dest[i] != '\0'; i++)
{
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return dest;
}
}
