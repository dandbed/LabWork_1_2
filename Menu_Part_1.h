#pragma once

#include "Library.h"
#include "Prototypes.h"
#include "InsertArr.h"
#include "Task_1.h"
#include "Task_2.h"
#include "Task_3.h"

template <class A>

void Menu_Part_1(A Type)
{
	char key = 0;
	int size = 0;
	bool Select = true, check = false;

	while (check == false)
	{
		cout << "\nHow many elements are in our array?\n";
		cin >> size;
		check = Check(size);
	}

	A* arr = new A[size];

	cout << "Fill the array with " << size << " elements\n";

	InsetArr(size, arr);

	cout << "The array is accepted, you are well done!\n";

	while (Select == true)
	{
		cout << "\nPress 1 to search for the sum of elements with odd indexes\nPress 2 to calculate the sum of the array elements located between the first and second negative element\nPess 3 to transform the array so that all elements whose modulus does not exceed 1 are located first\nPess 0 to back in MainMenu\n" << endl;
		cin >> key;

		if (key == '1' || key == '2' || key == '3' || key == '0')
		{
			switch (key)
			{
				case'1':
				{
					Test_1(arr, size);
					break;
				}

				case'2':
				{
					task_2(arr, size);
					break;
				}

				case'3':
				{
					task_3(arr, size);
					break;
				}

				case'0':
				{
					cout << "No problems\n";
					Select = false;
				}

				default:
				{
					cout << "Error! You press wrong button" << endl;
				}
			}
		}

		else
		{
			cout << "\nI belive in u\n";
		}
	}

	delete[] arr;

	return;
}