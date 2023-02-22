#include "main.h"
/**
 * times_table - Prints the 9 times table, starting from 0
 *
 * Return: Always 0
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			product = row * col;
			if (col == 0)
			{
				_putchar(product + 48);
			}
			if (product < 10 && col != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + 48);
			}
			else if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + 48);
				_putchar(product % 10 + 48);
			}
		}
		_putchar(10);
	}
}
