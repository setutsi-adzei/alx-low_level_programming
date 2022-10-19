#include "main.h"
/**
 * _islower - a function to check if c is a letter, uppercase or lowercase
 * @c: is the int that will be used for the argument of the function
 * Retrun: 1 if letter is lowercase, 0 if not
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
