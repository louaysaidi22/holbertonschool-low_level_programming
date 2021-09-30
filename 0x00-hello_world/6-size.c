#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
char c;
int a;
long int la;
long long int lla; 
float f;
printf("Size of a char: %lu bytes(s)\n", sizeof(c));
printf("Size of an int: %lu bytes(s)\n", sizeof(a));
printf("Size of a long int: %lu bytes(s)\n", sizeof(la));
printf("Size of a long long int: %lu byte(s)\n", sizeof(lla));
printf("Size of a float: %lu byte(s)\n", sizeof(lla));
return (0);
}
