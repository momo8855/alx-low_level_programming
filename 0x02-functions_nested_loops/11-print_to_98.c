#include "main.h"

/**
  * print_to_98: Entry Point
  *
  * Description: print to 98 forward and backward
  *
  * @n: start value
  *
  * Return: 0 Always (Success)
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	}
	else
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
	}
	printf("98\n");
}
