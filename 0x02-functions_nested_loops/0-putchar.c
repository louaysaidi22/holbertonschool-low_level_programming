#include "main.h"
/**
 * main - Entry point
 *  prints _putchar, followed by a new line..
 * Return: 0
*/
int main(void)
{
char msg[] = "_putchar\n";
int i = 0;
while (i <= 8)
{
_putchar(msg[i]);
i++;
}
return (0);
}
