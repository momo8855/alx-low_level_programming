#include "main.h"

/**
  * print_last_digit - Entry Point
  *
  * Description: Print the last digit of a number
  *
  * @n: input to get the last digit of
  *
  * Return: n
  */
int print_last_digit(long int n)
{
	int last_digit;

	last_digit = labs(n) % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
