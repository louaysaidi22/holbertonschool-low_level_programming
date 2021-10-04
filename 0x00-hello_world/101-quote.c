#include<stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
char msg1[] = "and that piece of art is useful\"";
char msg2[] = " - Dora Korpar, 2015-10-19\n";
syscall(SYS_write, 1, msg1, sizeof(msg1));
syscall(SYS_write, 1, msg2, sizeof(msg2));
return (1);
}
