#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
int num1;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
for (num1 = 'a'; num1 <= 'f'; num1++)
{
putchar(num1);
}
putchar('\n');
return (0);
}
