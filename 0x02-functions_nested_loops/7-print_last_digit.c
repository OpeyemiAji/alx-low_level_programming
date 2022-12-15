#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: parameter of the function
 *Return: Allow success
 */
 
int print_last_digit(int n)
{
int a;
a = -1 * (n % 10);
if (n > 0)
{
_putchar((n % 10) + '0');
return (n % 10);
}
else
{
_putchar(a + '0');
return (0);
}
}
