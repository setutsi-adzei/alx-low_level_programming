#include <stdio.h>
/**
 * main - function to print name
 * @argc: argc parameter
 * @argv: array of a command listed
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
