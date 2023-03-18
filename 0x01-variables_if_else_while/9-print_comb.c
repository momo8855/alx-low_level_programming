#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: print numbers sperated by comma and space
  *
  * Return: 0 always (Success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
