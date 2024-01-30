#include "Library.h"
#include "Prototypes.h"

bool Check(int size)
{
	if (size <= 0)
	{
		cout << "Are you serious?\nThink again\n";

		return 0;
	}

	else
	{
		if (size > 50)
		{
			cout << "Many elements.\ntry less than 50\n";

			return 0;
		}

		else
		{
			return 1;
		}
	}
}