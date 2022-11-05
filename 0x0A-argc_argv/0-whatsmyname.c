#include <stdio.h>
/**
 * main - the function to print name
 * @argc: argc parameter
 * @argv: array of a command listed
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
		return (0);
}
