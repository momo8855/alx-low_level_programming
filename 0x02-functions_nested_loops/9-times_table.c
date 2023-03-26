#include "main.h"

/**
  * times_table - Entry Point
  *
  * Decription: wirte the 9 times table
  *
  * Return: 0 Always (Success)
  */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row < 10; row++)
	{
		_putchar(48);
		for (col = 1; col < 10; col++)
		{
			_putchar(',');
			_putchar(' ');

			product = row * col;

			if (product < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}
	}
		_putchar('\n');
}
