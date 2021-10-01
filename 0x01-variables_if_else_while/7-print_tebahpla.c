#include<stdio.h>
/**
 * main - Entry point
 *  prints the alphabet in lowercase in reverse.
 * Return: 0
 */
int main(void)
{
char alphabet;
alphabet = 'z';
while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
