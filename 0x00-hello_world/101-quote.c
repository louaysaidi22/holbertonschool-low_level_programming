#include<stdio.h>
#include<string.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int i = 0;
while (i <= strlen(msg))
{
putchar(msg[i]);
i++;
}
return (1);
}
