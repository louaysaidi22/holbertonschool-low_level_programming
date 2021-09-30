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
printf("Size of char: %lu bytes(s)\n",sizeof(c));
printf("Size of int: %lu bytes(s)\n",sizeof(a));
printf("Size of long int: %lu bytes(s)\n",sizeof(la));
printf("Size of long long int: %lu byte(s)\n",sizeof(lla));
return (0);
}
