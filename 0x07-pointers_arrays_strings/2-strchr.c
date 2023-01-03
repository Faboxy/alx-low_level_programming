#include "main.h"
/**
* _strchr - a function that locates a char in a strimng
* @s: the string to be checked
* @c: the char being sought
* Return: the first occurence of 'c' or null
*/
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
			s++;

		return (s);
	}
	if (c == '\0')
		return (0);
}
