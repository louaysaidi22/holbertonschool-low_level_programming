#include<stdio.h>
/**
 * main - Entry point
 *  prints the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
return (0);
}
