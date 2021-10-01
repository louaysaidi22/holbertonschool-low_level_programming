#include<stdio.h>
/**
 * main - Entry point
 *  prints all the numbers of base 16 in lowercase.
 * Return: 0
 */
int main(void)
{
int a = 0;
char c = 'a';
while (a < 10)
{
printf("%d", a);
a++;
}
while (c <= 'f')
{
printf("%c", c);
c++;
}
putchar('\n');
return (0);
}
