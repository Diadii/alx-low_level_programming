#include "main.h"
/**
 * print_numbers - prints numbers 0 - 9
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
