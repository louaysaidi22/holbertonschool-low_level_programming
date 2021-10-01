#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * print whether the number stored in the variable n is positive or negative.
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0) { 
printf("%d is positive",n);
}
else if (n<0) {
printf("%d is negative",n);
else {
printf("0 is zero");
}
return (0);
}
