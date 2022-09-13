#include <stdio.h>
/**
 * main - main function
 *
 * Reurn: none
 */
int main(void)
{
	int count = 2;
	long int m = 1;
	long int n = m + 1;
	long int o = m + n;

	printf("%d, %d, ", m, n);
	while (count < 50)
	{
		printf("%d", o);
		count++;
		m = n;
		n = o;
		o = m + n;
		if (count < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
