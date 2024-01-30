#pragma once

#include "Library.h"

template <class A>

bool Negative(A* arr, int size, int El1, int El2)
{
	int h = 0;
	int key = El2 - El1;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			h++;
		}
	}

	if (h == 0)
	{
		cout << "\n Have not neagtive element\n";

		return 0;
	}

	if (key == 0)
	{
		cout << "\nIn array only 1 negative element\n";

		return 0;
	}

	else
	{
		if (key == 1)
		{
			cout << "\nThe negative elements are located one after the other\n";

			return 0;
		}

		else
		{
			if (key == 2)
			{
				cout << "\nNegative elements are found through one element\n";

				return 0;
			}

			else
			{
				return 1;
			}
		}
	}
}