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
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}
