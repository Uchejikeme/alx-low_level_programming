#include <stdio.h>

/**
 * main - Entry point below
 * Prints all single digit numbers of base 10 starting from 0.
 * Return: Eachtime 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
