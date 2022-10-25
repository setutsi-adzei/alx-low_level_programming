#include "main.h"
/**
 * _strlen - this returns the length of a string
 * @s: the string
 * Return: returns the length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
