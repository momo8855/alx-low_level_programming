#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 0. Positive anything is better than negative nothing
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is a positive number\n", n);
	else if (n < 0)
		printf("%d is a negative number\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
