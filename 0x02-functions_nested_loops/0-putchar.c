#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @ch  - an integer holding variable
 * Return:   returns 0 to show the end
 */
int main(void)
{
int ch;
for (ch = '_'; ch <= 'p'; ch = ch + 17)
putchar(ch);
for (ch = 'u'; ch >= 't'; ch--)
putchar(ch);
for (ch = 'c'; ch <= 'h'; ch = ch + 5)
putchar(ch);
for (ch = 'a'; ch <= 'r'; ch = ch + 17)
putchar(ch);

return (0);
}

