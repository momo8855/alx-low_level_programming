#include "main.h"
/**
  * print_sign - Entry Point
  *
  * Description: Print the sign of the number
  *
  * @n: the number to be checked
  *
  * Return: 1 if positive
  *	    0 if zero
  *	    -1 if negarive
  */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(n);
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
