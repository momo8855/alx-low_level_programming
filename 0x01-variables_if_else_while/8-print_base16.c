#include <stdio.h>

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
