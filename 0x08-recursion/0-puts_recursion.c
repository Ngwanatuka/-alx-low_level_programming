#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *@s: holds a string
 * Return: returns void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(s[0]);
		_puts_recursion(s +1);
	}
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
