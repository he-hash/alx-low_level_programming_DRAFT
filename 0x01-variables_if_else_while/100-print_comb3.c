#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	__uint8_t i, j;

	for (i = 48 ; i < 57 ; i++)
	{
		for (j = i ; j <= 57 ; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}