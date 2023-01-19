#include "function_pointers.h"
/**
 * print_name - function that prints a name
 *@name: name to be printed
 *@f: pointer to the printing function
 * Description - f acts as the pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
