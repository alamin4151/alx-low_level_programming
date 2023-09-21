#include "main.h"
/**
 * _puts - powed by a new line, to stdout
 * @str: st to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

