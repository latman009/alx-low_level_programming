#include "main.h"

/**
 * print_time_table - print time table of input
 *
 * startint with 0.
 *
 * @n:The value of time table to be printed
 */
void print_times_table(int n)
{
	int num, mult, prod;
	if (n >= 0 && n <=15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (mult = 1; mult <= n; mult++)
	{
	_putchar(',');
	_putchar(' ');
	prod = num * mult;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 99)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod>= 10)
	{
	_putchar((prod / 10) + '0');
	}
	 _putchar((prod / 10) + '0');
	}
	 _putchar('\n');
	}
	}
}
