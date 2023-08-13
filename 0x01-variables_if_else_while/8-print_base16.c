#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Print the alphabeics
 * Return: Always (Success)
 */
int main(void)
{
	int a;
	char b;
	for (a = '0'; a <= '9'; a++)
	putchar(a);
	for (b = 'a'; b <= 'f'; b++)
	putchar(b);
	putchar('\n');
	return (0);
}
