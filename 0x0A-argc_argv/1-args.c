#include <stdio.h>
/**
 * main - function to print
 * @argc: argc parameter
 * @argv: array of a commanf listed
 * Return: 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
