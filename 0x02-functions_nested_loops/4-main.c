#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpa('H');
    _putchar(r + '0');
    r = _isalpa('o');
    _putchar(r + '0');
    r = _isalpa(108);
    _putchar(r + '0');
    r = _isalpa(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
