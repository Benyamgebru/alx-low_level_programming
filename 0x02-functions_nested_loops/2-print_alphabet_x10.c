#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; j++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
