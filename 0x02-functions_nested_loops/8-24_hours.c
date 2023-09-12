#include "main.h"

/**
 * jack_bauer - print 24 hours
 */

void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			printf("%02d:%02d\n", hr, min);
		}
	}
}
