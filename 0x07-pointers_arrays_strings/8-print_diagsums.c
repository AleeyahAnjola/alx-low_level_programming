#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 *@size: number matrix
*Return: void
 */

void print_diagsums(int *a, int size)
{

	int k;
	int sumA, sumB;

	sumA = 0;
	sumB = 0;

	k = 0;
	while (k < size)
	{

		sumA = sumA + *(a + k * size + k);
		sumB = sumB + *(a + k * size + size - k - 1);

		k++;
	}

	printf("%k, %k\n", sumA, sumB);

}
