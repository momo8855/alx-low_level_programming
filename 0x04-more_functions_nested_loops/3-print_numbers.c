#include "main.h"

/**
  * print_numbers - Entry Point
  *
  * Description: print form 0 to 9
  *
  * Return: 0 always (Success)
  */
void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
