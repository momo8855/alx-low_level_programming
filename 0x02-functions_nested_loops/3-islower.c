#include "main.h"

/**
  * _islower - checks lowercase letters
  *
  * @c: the input to be checked
  *
  * Return: returns 1 if 'c' is lowercase
  *		ohterwise returns 0 always (Sucess)
  */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
