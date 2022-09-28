#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *@s: holds a string
 * Return: returns void
 */
void _puts_recursion(char *s)
{
	printf("%s\n", s);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
