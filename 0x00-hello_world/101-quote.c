#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry Point
 *
 * You are not allowed to use any functions
 * listed in the NAME section of the
 * man (3) printf or man (3) puts
 * Return: 1
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
