#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: no of command line arguments
 * @argv: array containing command line arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
