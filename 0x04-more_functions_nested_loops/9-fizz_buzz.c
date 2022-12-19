#include <stdio.h>
#include <stdlib>

/**
* fizz_buzz - Entry point
* Description: prints multiples of 3 and 5
* @n: number to be printed
* return: 0
*/

int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
printf("fizzBuzz");
}
else if (n % 3 == 0)
{
printf("fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%i", n);
}

if (n < 100)
{
printf(" ");
}
else
{
printf("\n");
}
return (0);
}

