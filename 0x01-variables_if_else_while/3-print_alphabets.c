#include <stdio.h>

/**
 * main - Prints alphabet in lowercase and uppercase
 *
 * Return: Always (Success)
 */

int main(void)
{
char i;
char j;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
