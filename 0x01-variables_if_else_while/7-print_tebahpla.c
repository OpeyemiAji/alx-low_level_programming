#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always (Success)
 */

int main(void)
{
char lowAlpha;
for (lowAlpha = 'z'; lowAlpha >= 'a'; lowAlpha--)
{
putchar(lowAlpha);
}
putchar('\n');

return (0);
}
