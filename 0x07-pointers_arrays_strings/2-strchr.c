#include "main.h"
#include "string.h"
/**
* _strchr - a function that locates a char in a strimng
* @s: the string to be checked
* @c: the char being sought
* Return: the first occurence of 'c' or null
*/
char *_strchr(char *s, char c)
{

	unsigned int i = 0;

	for ((; *s + i) != '\0'; i++)
		if (*s(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

