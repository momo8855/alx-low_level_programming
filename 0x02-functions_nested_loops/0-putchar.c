#include "main.h"
/**
  * main - Entry Point
  *
  * Description: Write a program that prints _putchar, followed by a new line.
  *
  * Return: 0 Always (Success)
  */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
