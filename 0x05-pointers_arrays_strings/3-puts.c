#include "main.h"

/**
  * _puts - print string
  *
  * @str: the string to print
  *
  * return nothing
  */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(*str);
		i++;
	}
	_putchar('\n');
}
