#include <stdio.h>

/**
* main - Entry Point
*
* Description: print base 16
*
* Return: 0 Always (Success)
*/
int main(void)
{
	char n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	for (n = 10; n <= 15; n++)
		putchar(n - 10 + 'a');
	putchar('\n');

	return (0);
}
