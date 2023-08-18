#include "main.h"

/**
 * _isdigit - check if a character is diget
 * @x: The number to be checked
 * Return: 1 for character that will be digit or 0 for anything else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
