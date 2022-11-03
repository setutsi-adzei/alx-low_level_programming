#include "main.h"

/**
 * int is_prime_number(int n);
 * @num: The number to be checked
 * @div: The divisor
 * Return: If the number is divisible - 0
 */
int is_prime_number(int n)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
