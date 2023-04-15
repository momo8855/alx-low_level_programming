#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <math.h>
void _puts_recursion(char *s);
int _putchar(char c);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int sqrt_helper(int n, int low, int high);
int _sqrt_recursion(int n);
int is_divisable(int n, int divisor);
int is_prime_helper(int n, int divisor);
int is_prime_number(int n);
#endif
