#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 * @: the character to be written
 * Return: on success 1
 * on error, return -1 and error is not set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
