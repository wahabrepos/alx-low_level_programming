#include "main.h"

void print_alphabet_x10(void);
void print_alphabet(void);
/**
 * print_alphabet_x10 - Print 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		print_alphabet();
		_putchar(10);
	}
}
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
}
