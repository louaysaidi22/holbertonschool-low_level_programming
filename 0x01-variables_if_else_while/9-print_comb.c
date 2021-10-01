#include<stdio.h>
/**
 * main - Entry point
 *  prints all possible combinations of single-digit numbers..
 * Return: 0
 */
int main(void)
{
int n = 0;
while (n < 9)
{
printf("%d", n);
printf(", ");
n++;
}
n = 9;
printf("%d ", n);
return (0);
}
