#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: print 0-9
  *
  * Return: 0 Always (Success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; ++n)
	{
		printf("%d", n);
		printf("\n");
	}

	return (0);
}
