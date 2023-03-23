#include "main.h"

/**
  * _isalpha - Entry Point
  *
  * @c: input to be checked
  *
  * Description: checks if an argument is alphabet
  *
  * Return: 1 if the argument is alphabetic character
  *		and 0 otherwise
  */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
