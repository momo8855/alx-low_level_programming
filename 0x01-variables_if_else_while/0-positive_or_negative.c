#include <stdlib.h>
  2 #include <time.h>
  3 #include <stdio.h>
  4
  5 /**
  6  * main - Entry Point
  7  *
  8  * Description: 0. Positive anything is better than negative nothing
  9  *
 10  * Return: Always 0 (Success)
 11  */
 12 int main(void)
 13 {
 14         int n;
 15
 16         srand(time(0));
 17         n = rand() - RAND_MAX / 2;
 18         if (n > 0)
 19                 printf("%d is a positive number\n", n);
 20         else if (n < 0)
 21                 printf("%d is a negative number\n", n);
 22         else
 23                 printf("%d is zero\n", n);
 24
 25         return (0);
 26 }
