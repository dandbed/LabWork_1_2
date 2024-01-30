#pragma once

#include "Library.h"
#include "Prototypes.h"
#include "Input_of_Matrix_Elements.h"
#include "DataCheck_Part_2.h"
#include "Exercise_1_Part_2.h"
#include "Exercise_2_Part_2.h"

template <class A>
void Menu_Part_2(A Type)
{
	const int Size = 50;
	int N = 0;
	bool ExerciseSelect = true;
	char Part_2_Select = 0;

	A** Array = new A*[Size];
	for (int i = 0; i < Size; i++)
	{
		Array[i] = new A[Size];
	}

	while (ExerciseSelect == true)
	{
		bool Part_2 = true, MenuPart_2_Select = true;

		while (Part_2 == true)
		{
			N = SizeCheck();
			Input_of_Matrix_Elements(Array, N);
			Part_2 = DataCheck_Part_2(Array, N);
		}

		while (MenuPart_2_Select == true)
		{
			std::cout << "Choose the task you want to solve: " <<
				"\n\n	 1) EXERCISE 1. --> Please, press button '1'." <<
				"\n\n	 2) EXERSISE 2. --> Please, press button '2'." <<
				"\n\n	Press button '0' if you want to leave TASK 2." << std::endl;

			std::cin >> Part_2_Select;

			switch (Part_2_Select)
			{
			case '0':
			{
				std::cout << "Thanks for work with TASK 2." << std::endl;
				MenuPart_2_Select = false;
				ExerciseSelect = false;
				break;
			}

			case '1':
			{
				std::cout << "Great. You choose EXERCISE 1." << std::endl;
				system("cls");
				Exercise_1_Part_2(Array, N);
				break;
			}

			case '2':
			{
				std::cout << "Great. You choose EXERCISE 2." << std::endl;
				system("cls");
				Exercise_2_Part_2(Array, N);
				break;
			}

			default:
			{
				std::cout << "Error! You press wrong button." << std::endl;
				break;
			}
			}
		}
	}

	for (int i = 0; i < Size; i++)
	{
		delete[] Array[i];
	}
	delete[] Array;

	return;
}