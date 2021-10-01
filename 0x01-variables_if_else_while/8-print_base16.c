#include<stdio.h>
/**
 * main - Entry point
 *  prints all the numbers of base 16 in lowercase.
 * Return: 0
 */
int main(void)
{char a = '0';
char c = 'a';
while (a <= '9')
{
putchar(a);
a++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
