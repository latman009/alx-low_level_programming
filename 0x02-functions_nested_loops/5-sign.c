#include "main.h"


/**
 * print_sign - print a sign of number
 * @n: The number to be checked
 * Return 1 for positive number -1 for negative number or zero for anythiing else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
