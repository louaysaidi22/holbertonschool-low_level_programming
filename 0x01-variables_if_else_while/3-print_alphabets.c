#include<stdio.h>
/**
 * main - Entry point
 *  prints the alphabet in lowercase, then in uppercase.
 * Return: 0
 */
int main(void)
{
char alphabet, ALPHABET;
alphabet = 'a';
ALPHABET = 'A';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
while (ALPHABET <= 'Z')
{
putchar(ALPHABET);
ALPHABET++;
}
putchar('\n');
return (0);
}
