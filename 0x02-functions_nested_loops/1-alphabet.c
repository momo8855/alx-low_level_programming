#include "main.h"

/**
  * print_alphabet - use _putchar to print
  *		the alphabet a - z
 */
void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch ++;
	}
	_putchar('\n');
}
