#include "main.h"

/**
  * swap_int - swaps values
  *
  * @a: first input
  * @b: second input
  *
  * Return: nothing
  */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
