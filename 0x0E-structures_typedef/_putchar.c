#include <unistd.h>
/**
 * _putchar - writes the charcater c to stdout
 * @c: the chracter to be written
 *
 * Return: on success 1
 * on error, -1 returned and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
