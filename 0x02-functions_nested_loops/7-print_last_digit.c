#include "main"
/**
 * print_last_digit - prints last digit
 *
 * @n: takes integer type input
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	_putchar(last_digit);
	return (last_digit);
}
