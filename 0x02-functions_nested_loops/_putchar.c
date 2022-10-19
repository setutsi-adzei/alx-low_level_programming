#include "main.h"
#include "unistd.h"

/**
 * _putchar - writes c to stdout
 *
 * Return: 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));;
}
