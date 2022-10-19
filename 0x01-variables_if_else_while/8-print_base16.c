#include <stdio.h>
/**
* main - print the numbers of base 16 in lower case
*
*Return: Always 0 (success)
*/
int main(void)
{
char base;

for (base = '0'; base = '9'; base++)
putchar(base);

for (base = 'a'; base <= 'f'; base++)
putchar(base);
putchar('\n');
return (0);
}
