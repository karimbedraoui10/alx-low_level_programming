#include "main.h"
/**
 * print_array - print all arrays
 *
 * @arr: the array
 *
 * @m: number of arrays
 */
void print_array(int *arr, int m)
{
	int i;

	for (i = 0; i < m; i++)
	{
		if (i == 0)
			printf("%d", arr[i]);
		else
			printf(", %d", arr[i]);
	}
	printf("\n");
}
