#include <stdio.h>
/**
 * void print_alphabet_x10(void)
 * return: 0
 */
char print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');	
	}
}
int main(void)
{
	char c = print_alphabet_x10();

	putchar(c);
	return (0);
}
