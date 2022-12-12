#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
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
