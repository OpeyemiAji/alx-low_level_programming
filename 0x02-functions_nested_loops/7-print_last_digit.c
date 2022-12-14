#include "main.h"

/**
 *print_last_digit - prints the last digit number
 *@n: receives a value fron the main.c
 * Return: last digit value
 */
 
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
