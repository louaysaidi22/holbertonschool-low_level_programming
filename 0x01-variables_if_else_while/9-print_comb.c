#<stdio.h>
/**
 * main - Entry point
 *  prints all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
char n = '0';
char c = ',';
char e = ' ',
while (n < '9')
{
putchar(n);
putchar(c);
putchar(e);
n++;
}
n = '9';
putchar(n);
return (0);
}
