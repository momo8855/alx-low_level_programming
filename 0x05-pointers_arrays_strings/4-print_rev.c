#include "main.h"

/**
  * print_rev - string in reverse
  *
  * @s: pointer to the string
  *
  * Return: nothing
  */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	for (j = i; j = 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
