#include "main.h"
/**
 * print_alphabet - prints a the alphabet in lowercase.
 * @a: alphabet.
 * Return: 0
*/
void print_alphabet(void)
{
int a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
return (0);
}
