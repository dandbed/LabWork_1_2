#include "Library.h"
#include "Prototypes.h"
#include "Menu_Part_1.h"
#include "Menu_Part_2.h"

void MainMenu()
{
	bool MenuSelect = true;
	char Type = 0;

	while (MenuSelect == true)
	{
		bool ExitSelect = true, PartSelect = true;
		char Select = 0, Exit_Program = 0;

		while (PartSelect == true)
		{
			std::cout << "Choose the task you want to solve: " <<
				"\n\n	TASK 1) Work with one-dimensional array --> Please, press button '1'." <<
				"\n\n	TASK 2) Work with square matrix --> Please, press button '2'." <<
				"\n\n	TASK 3) Work with text file --> Please, press button '3'." <<
				"\n\n	Press button '0' if you want to leave program." << std::endl;

			std::cin >> Select;

			switch (Select)
			{
			case '0':
			{
				std::cout << "Thanks for work with this program.";
				ExitSelect = false;
				MenuSelect = false;
				PartSelect = false;

				break;
			}

			case '1':
			{
				std::cout << "Great. You choose TASK 1." << std::endl;
				system("cls");
				PartSelect = false;
				Type = Select_of_Data_type();
				switch (Type)
				{
					case '1':
					{
						Menu_Part_1(1);
						break;
					}

					case '2':
					{
						Menu_Part_1(1.0f);
						break;
					}

					case'3':
					{
						Menu_Part_1(1.0);
						break;
					}
				}

				break;
			}

			case '2':
			{
				std::cout << "Great. You choose TASK 2." << std::endl;
				system("cls");
				PartSelect = false;
				Type = Select_of_Data_type();
				switch (Type)
				{
					case '1':
					{
						Menu_Part_2(1);
						break;
					}

					case '2':
					{
						Menu_Part_2(1.0f);
						break;
					}

					case'3':
					{
						Menu_Part_2(1.0);
						break;
					}
				}
				
				break;
			}

			case '3':
			{
				std::cout << "Great. You choose TASK 3." << std::endl;
				system("cls");
				PartSelect = false;
				Menu_Part_3();

				break;
			}

			default:
			{
				std::cout << "Error! You press wrong button." << std::endl;
				break;
			}
			}
		}

		while (ExitSelect == true)
		{
			std::cout << "Do you want to continue to work with this program?" <<
				"\n\n	Press 'y' or 'Y' if you want to continue." <<
				"\n\n	Press 'n' or 'N' if you want to stop." << std::endl;

			std::cin >> Exit_Program;

			if ((Exit_Program != 'y') && (Exit_Program != 'Y') && (Exit_Program != 'n') && (Exit_Program != 'N'))
			{
				std::cout << "\nError! You press wrong button." << std::endl;
			}

			else
			{
				if (Exit_Program == 'y' || Exit_Program == 'Y')
				{
					std::cout << "\nGreat.";
					ExitSelect = false;
				}

				if (Exit_Program == 'n' || Exit_Program == 'N')
				{
					std::cout << "\nThanks for working with this program." << std::endl;
					MenuSelect = false;
					ExitSelect = false;
				}
			}
		}
	}

	return;
}