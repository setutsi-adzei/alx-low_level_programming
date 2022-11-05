#include <stdio.h>
/**
 * main - this is a function to print name
 * @arg: argc parameter
 * @argv: array of a command listed
 * Return: 0 (success)
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
