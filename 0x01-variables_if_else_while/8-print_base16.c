#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num3 = '0';
	char gamma = 'a';

	for (num3 = '0'; num3 <= '9'; num3++)
		putchar(num3);
	for (gamma = 'a'; gamma <= 'f'; gamma++)
		putchar(gamma);

	putchar('\n');
	return (0);
}
