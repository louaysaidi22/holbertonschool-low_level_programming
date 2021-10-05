#include "main.h"
/**
 * print_alphabet - prints the alphabet ten times
 * in lowercase using the character a.
 *
*/
void print_alphabet_x10(void)
{
int a = 'a';
int i;
for (i = 1; i <= 10; a++)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
}
