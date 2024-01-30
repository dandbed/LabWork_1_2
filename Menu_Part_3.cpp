#include "Library.h"
#include "Prototypes.h"

void Menu_Part_3()
{
	const int Size = 200;
	char* Array = new char[Size];
	int N = 0;
	bool ExerciseSelect = true, Menu_Part_3_Select = true;
	char Part_3_Select = 0;

	while (ExerciseSelect == true)
	{
		Menu_Part_3_Select = FileCheck(Array, N);

		if (Menu_Part_3_Select == true)
		{
			while (Menu_Part_3_Select == true)
			{
				std::cout << "Choose the task you want to solve: " <<
					"\n\n	EXERCISE 1. --> Please, press button '1'." <<
					"\n\n	Press button '0' if you want to leave TASK 3." << std::endl;
				std::cin >> Part_3_Select;

				switch (Part_3_Select)
				{
				case '0':
				{
					std::cout << "Thanks for work with TASK 3." << std::endl;
					Menu_Part_3_Select = false;
					ExerciseSelect = false;
					break;
				}

				case '1':
				{
					std::cout << "Great. You choose EXERCISE 1." << std::endl;
					system("cls");
					Exercise_1_Part_3(Array, N);
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

		else
		{
			ExerciseSelect = false;
		}
	}

	delete[] Array;

	return;
}