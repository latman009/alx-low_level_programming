#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Print the alphabeics
 * Return: Always (Success)
 */
int main(void)
{
	int a, b;
	for (a = '0'; a < '9'; a++)
	{
	for (b = a + 1; b <= '9'; b++)
	{
	if (a != b)
	{
	putchar(a);
	putchar(b);
	if (a == '8' &&  b == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
}

