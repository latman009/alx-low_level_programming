#include "main.h"

/**
 * _isuper - Check if a letter is upper
 *
 * @x: The number to be checked
 *
 * Return:1 for upper letter 0 for anything else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
