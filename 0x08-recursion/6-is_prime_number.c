#include "main.h"
/**
  * is_divisable - check if divisable
  *
  * @n: number to be checked
  * @divisor: the divisor
  * Return: returns 1 if n is divisible by divisor, otherwise it returns 0
  */
int is_divisable(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	else if (n % divisor == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisable(n, divisor - 1));
	}
}

/**
  * is_prime_helper - check if n is prime
  *
  * @n: number to be checked
  * @divisor: the divisor to test
  *
  * Return: return 1 if n is prime and -1 otheriwse
  */
int is_prime_helper(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}
	else if (divisor == 1)
	{
		return (1);
	}
	else if (is_divisable(n, divisor - 1))
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, divisor - 1));
	}
}

/**
  * is_prime_number - check if n is prime
  *
  * @n: number to be checked
  *
  * Return: 1 if the input integer is a prime number, otherwise return 0
  */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
