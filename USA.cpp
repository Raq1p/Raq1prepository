#include <iostream>
#include <windows.h>
using namespace std;



int main()
{
	HANDLE h = GetStdHandle(-11);



	int height = 26;
	int width = 40;



	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{

			if (x < 13 && y < 14)
			{
				if (x % 2 == 1 && y % 2 == 1 && y != 13)
				{
					SetConsoleTextAttribute(h, 15);
				}
				else
				{
					SetConsoleTextAttribute(h, 9);
				}

			}
			else
			{
				if (y % 4 == 0 || y % 4 == 1)
					SetConsoleTextAttribute(h, 12);
				else
					SetConsoleTextAttribute(h, 15);
			}

			cout << (char)178 << (char)178;
		}
		cout << "\n";
	}
}
