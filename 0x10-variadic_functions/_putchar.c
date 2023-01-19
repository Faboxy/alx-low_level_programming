#include <unistd.h>
/**
 * _putchar - prints a charcter
 * @c: the charcter to be printed
 *
 * Return: always 1 on success else -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}



