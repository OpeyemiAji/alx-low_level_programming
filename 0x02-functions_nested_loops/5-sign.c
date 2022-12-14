#include "main.h"

/**
 *print_sign - This function checks for alphabets
 *
 *Return: Always 0 (Success)
 * @n: this accepts argument value
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
