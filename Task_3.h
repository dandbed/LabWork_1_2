#pragma once

#include "Library.h"
#include "Size_of_Array.h"
#include "Create_of_new_array.h"
#include "Display_Part_1.h"

template<class A>

void task_3(A* arr, int size)
{
	int new_size = 0;

	new_size = Size_of_Array(arr, size);

	A* TempArr = NULL;

	if (new_size != 0)
	{
		int j = 0;

		TempArr = create_of_new_arr(arr, size, new_size);
		DisplayPart_1(TempArr, new_size);
	}

	else
	{
		cout << "Error! Modulus of all element is less than 1" << endl;
	}

	delete TempArr;

	return;
}