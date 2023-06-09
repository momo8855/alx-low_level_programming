#include "main.h"

/**
  * factorial - factorial of a given number
  *
  * @n: the number to return the factorial of
  *
  * Return: -1 if n is lower than 0
  *	otherwise return the factorial
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((n == 0) | (n == 1))
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
