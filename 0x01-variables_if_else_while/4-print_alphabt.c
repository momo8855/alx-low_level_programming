#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: except e and q
  *
  * Return: 0 Always (Success)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		if (c != 'e' && c != 'q')
			putchar(c);

	putchar('\n');

	return (0);
}
