#include "main.h"

/**
* _isdigit - checks for a digit
* @c: the character to be checked
* Return: gives 1 if a digit otherwise 0
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
else
{
return (0);
}
}
