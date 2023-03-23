#include "main.h"
/**
 * print_alphabet_x10: print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i < 10)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n')
	}
}
