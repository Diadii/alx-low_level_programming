#include "main.h"
/**
 * _islower - checks lowercase
 * Returns 1 if input is lowercase
 * Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
