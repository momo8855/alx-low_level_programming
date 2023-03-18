#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: print 0-9 using putchar
  *
  * Return: 0 Alwyas (Success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; ++n)
		putchar(n + '0');
	putchar('\n');

	return (0);
}
