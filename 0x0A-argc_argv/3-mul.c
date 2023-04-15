#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  *
  * @argc: number of arguments
  * @argv: vector of arguments
  *
  * Return: 0 or 1 in case of error
  */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mul);
	}
	return (0);

}
