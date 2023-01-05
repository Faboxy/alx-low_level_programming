#include "main.h"
/**
 * prime_check - checks whether an input integer is a prime number
 * @f: factor check
 * @p: possible prime number
 * Return: returns 1 if the input int is a prime number else 0
 */
int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)

		return (0);

	else if (f > p / 2)

		return (1);
	else
		return (prime_check(f + 1, p));
}
/**
 * is_prime_number - states if number is prime
 * @n: number to be checked
 * Return: returns 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}


