#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *
 *@n: Receives a value from the main.c
 *
 * Return: Always 0 (success)
 * /
 
int print_last_digit(int n)
{
int ld = n % 10;
if (n < 0)
{
ld *= -1;
}
_putchar(ld + '0');

return (0);
}
