#include "main.h"

/**
  * _isupper - Entry Point
  *
  * Description: checks for uppercase character
  *
  * @c: input to check
  *
  * Return: 1 if c is upper
  *	    0 otherwise
  */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
