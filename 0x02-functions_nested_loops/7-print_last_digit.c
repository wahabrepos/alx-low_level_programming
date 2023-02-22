#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: integer
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{

	int last_digt;

	last_digt = n % 10;

	if (last_digt < 0)

		last_digt *= -1;

	_putchar(last_digt + '0');
	return (last_digt);
}
