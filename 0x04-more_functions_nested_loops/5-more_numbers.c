#include "main.h"

/**
  * more_numbers - Entry Point
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
			if (j > 9)
			{
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
			}
			else
			{
				_putchar(j + 48);
			}
		}
		_putchar('\n');
		i++;
	}
}
