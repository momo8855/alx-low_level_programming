#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry Point
  *
  * @argc: number of arguments - 1
  * @argv: vector of arguments
  *
  * Return: 0 Always (Success)
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
