#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabetLower1 = 'a';
	char alphabetCapital = 'A';

	for (alphabetLower1 = 'a'; alphabetLower1 <= 'z'; alphabetLower1++)
		putchar(alphabetLower1);
	for (alphabetCapital = 'A'; alphabetCapital <= 'Z'; alphabetCapital++)
		putchar(alphabetCapital);

	putchar('\n');

	return (0);
}
