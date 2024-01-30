#include "Library.h"

int quantity(int size)
{
	int k = 0;

	for (int i = 1; i < size; i++)
	{
		if (i % 2 == 0)
		{
			k++;
		}
	}

	return k;
}