#include "main.h"

/**
  * _isdigit - Entry Point
  *
  * Description: checks for a digit (0 through 9)
  *
  * @c: the input to check
  *
  * Return: 1 if c is a digit
  *	    0 otherwise
  */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
