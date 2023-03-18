#include <stdio.h>
/**
  * main - Entry Point
  *
  * Dscription: 2 loops
  *
  * Return: Alwyas 0 (Success)
  */
int main(void)
{
	char l, u;

	for (l = 'a'; l <= 'z'; ++l)
		putchar(l);
	for (u = 'A'; u <= 'Z'; ++u)
		putchar(u);

	putchar('\n');
	
	return (0);
}
