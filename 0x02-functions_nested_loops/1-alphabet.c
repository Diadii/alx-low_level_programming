#include "main.h"
/**
 * print_alphabet - prints from a - z
 * Return:0
 */
void print_alphabet(void)
{
	int i;	

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}