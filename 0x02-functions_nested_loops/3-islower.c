#include "main.h"

/**
*_islower - checks for lowercase
* @c: is an ASCII character
*
*Return: 1 if lowercase
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
