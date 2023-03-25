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
		for (col = 0; col < 10; col++)
		{
			product = row * col;
			if (product < 10)
			{
				_putchar(product + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(product + 48);
				_putchar(',');
				_putchar(' ');
			}
		_putchar('\n');
		}
}
