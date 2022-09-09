#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabetLower = 'a';

	for (alphabetLower = 'a'; alphabetLower <= 'z';)
	{
		if (alphabetLower == 'q')
		{
			alphabetLower++;
		}
		else if (alphabetLower == 'e')
		{
			alphabetLower++;
		}
		else
		{
			putchar(alphabetLower);
			alphabetLower++;
		}
	}

	putchar('\n');

	return (0);
}
