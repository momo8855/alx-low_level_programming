#include "main.h"

/**
  * more-numbers - Entry Point
  *
  * Description: 0-14 10 times
  *
  * Return: Always 0 (Success)
  */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(i + 48);
		}
		_putchar('\n');
		i++;
	}
}
