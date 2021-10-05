#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * in lowercase using the character a.
 *
*/
void print_alphabet_x10(void)
{
int a = 'a';
int i = 0;
while (i <= 10)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
i++;
}
}
