#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
