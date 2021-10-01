#include<stdio.h>
/**
 * main - Entry point
 *  prints the alphabet in lowercase expect q and e.
 * Return: 0
 */
int main(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
if ((alphabet != 'q') || (alphabet != 'e'))
{
putchar(alphabet);
}
alphabet++;
}
putchar('\n');
return (0);
}
