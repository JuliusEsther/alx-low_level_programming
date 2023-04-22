#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description 'Print number of base 10 putchar'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
