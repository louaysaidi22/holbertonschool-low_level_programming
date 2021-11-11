#include <stdio.h>
/**
 * beforemain - function that prints a string
 * before the main function is executed.
 */
void __attribute__ ((constructor)) beforemain(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
