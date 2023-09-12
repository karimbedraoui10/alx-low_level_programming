#include "main.h"

/**
 * times_table - print 24 hours
 */

void times_table(void)
{
	int i = 0;
	int min = 0;
	int z;

	for (i = 0; i < 10; i++)
	{
		for (min = 0; min < 10; min++)
		{
			z = i * min;
			if (min < 9)
			{
				if (z < 10)
				{
					printf("%d,  ", z);
				}
				else
				{
					printf("%d, ", z);
				}
			}
			else
			{
				printf("%d", z);
			}
		}
		printf("\n");
	}
}
