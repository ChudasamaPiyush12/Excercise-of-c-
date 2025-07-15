#include <iostream>

using namespace std;

int main()
{
	// Print 7 lines
	for (int line = 0; line < 7; line++)
	{
		// Line 0 and 6: Solid xxxxx
		if (line == 0 || line == 6)
		{
			for (int i = 0; i < 5; i++)
			{
				cout << 'x';
			}
		}
		// Line 1 and 5: x x x x
		else if (line == 1 || line == 5)
		{
			for (int i = 0; i < 4; i++)
			{
				cout << 'x' << ' ';
			}
		}
		// Line 2 and 4: x x x
		else if (line == 2 || line == 4)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << 'x' << ' ';
			}
		}
		// Line 3 (middle): Special pattern
		else
		{
			cout << 'x' << " xxxxxxx"
				 << " xxxxxxx" << 'x';
		}

		cout << endl; // New line after each pattern
	}

	return 0;
}