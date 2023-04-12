#include "main.h"

/**
  * _pow_recursion - returns the value of x raised to the power of y
  *
  * @x: base number
  * @y: the power
  *
  * Return: value of x raised to the power of y
  *	or -1 if y is lower than 0
  */
int _pow_recursion(int x, int y)
{
	int half;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	half  = _pow_recursion(x, y / 2);

	if (y % 2 == 0)
	{
		return (half * half);
	}
	else
	{
		return (half * half * x);
	}
}
