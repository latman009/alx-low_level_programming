#include "main.h"

/**
 * prinit_most_number - print most number since 0 up to 9
 * Description: print number excluding 2 and 4
 * Return: The number since 0 up to 9
 */

void print_most_numbers(void)
{
	int x = 0;
	
	for (; x <=0; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
