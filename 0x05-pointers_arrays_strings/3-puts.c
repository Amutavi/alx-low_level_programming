#include "main.c"
#include <unistd.h>
/**
*_puts - prints a string, followed by a new line, to stdout.
*@str: value to be evaluated
*Return: not.
*/
void _puts(char *str)
{
int l = 0;

while (*(str + l) != '\0')
{
_putchar(str[l]);
l++;
}
_putchar('\n');
}
