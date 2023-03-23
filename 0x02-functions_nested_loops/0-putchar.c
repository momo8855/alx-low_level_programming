#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: Print the characters of _putchar
  *
  * Return: 0 Always (Success)
  */
int main(void)
{
	int i = 0;
	char str[] = "_putchar";

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	printf("\n");


	return (i);
}
