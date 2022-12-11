#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */

int main(void)
{
char lowApha;
for (lowApha = 'a'; lowApha <= 'z'; lowApha++)
{
if (lowApha != 'e' && lowApha != 'q')
putchar(lowApha);
}
putchar ('\n');
return (0);
}
