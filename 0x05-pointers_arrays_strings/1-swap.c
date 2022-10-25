#include <stdio.h>
#include "main.c"
/**
*swap_int - swaps the values of two integers.
*@a: value to be evaluated
*@b: value to be evaluated
*Return: not.
*/
void swap_int(int *a, int *b)
{

int n = *a;
*a = *b;
*b = n;
}
