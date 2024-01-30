#include "Library.h"

bool DataCheck_Part_3(char* Array, int N)
{
	bool Correct_Data = true;
	char Select = 0;

	while (Correct_Data == true)
	{
		std::cout << "Press 'y' or 'Y' if data is correct." << "\nPress 'n' or 'Y' if data isn't correct." << std::endl;
		std::cin >> Select;

		if (Select == 'y' || Select == 'Y')
		{
			std::cout << "Great.";
			Correct_Data = false;

			return true;
		}

		else
		{
			if (Select == 'n' || Select == 'N')
			{
				std::cout << "Please, enter the changes in the file 'Text_File.txt'. You will be taken to the main menu." << std::endl;
				Correct_Data = false;

				return false;
			}

			else
			{
				std::cout << "\nError!You press wrong button." << std::endl;
			}
		}
	}
}