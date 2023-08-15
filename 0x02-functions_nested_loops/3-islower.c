#include "main.h"
/**
 * _is lower - check for lower case character
 * @c: The character to be checked
 * Return:1 for lower case 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
