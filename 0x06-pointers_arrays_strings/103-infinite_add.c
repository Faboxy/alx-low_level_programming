#include "main.h"
/**
* infinite_add - adds two numbers
* @n1: the first number
* @n2: the second number
* @r: the buffer to store the result
* @size_r: the buffer size
*
* Return: pointer to the result if buffor is not overflowed, else 0
*/

char	*infinite_add(char *n1, char *n2, char *r, int size_r)
{
int l1 = _strlen(n1), l2 = _strlen(n2);
int ret = 0, j = 0, k = 0, tmp, a, b;

if (l1 >= size_r || l2 >= size_r)
return (0);

while (k < l1 || k < l2)
{
if (k >= l1)
a = 0;
else
a = n1[l1 - k - 1] - '0';

if (k >= l2)
b = 0;
else
b = n2[l2 - k - 1] - '0';

tmp = a + b + ret;
ret = (tmp >= 10) ? 1 : 0;
r[k++] = (tmp % 10) + '0';
}

if (ret == 1)
{
if (k < size_r - 1)
r[k++] = '1';
else
return (0);
}
j = k;
while (j <= size_r)
r[j++] = '\0';
rev_n_string(r, k);
return (r);
}
