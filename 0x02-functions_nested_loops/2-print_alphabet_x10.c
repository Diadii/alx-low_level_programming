#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * return: 0
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');	
	}
}
