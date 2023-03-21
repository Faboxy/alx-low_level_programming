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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}

