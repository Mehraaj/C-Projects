#include <windows.h>
#include <iostream>
#include <conio.h>      //look up how kb hit works exactly to male sure your doing proper stuff
						//try to do many if else statements with kb hit for each letter, and these will play frequencies 
using namespace std;

int main()
{
	char a, b, c, d, e, f, g;
	int x, counter;

	while (1)
	{
		cout << "A = Eb" << endl;
		cout << "q = Eb short " << endl;
		cout << "s = E" << endl;
		cout << "E = B" << endl;
		cout << "W = Ab" << endl;
		cout << "H = Eb short " << endl;
		cout << "J = E" << endl;
		cout << "K = B" << endl;
		cout << "L = Ab" << endl;

		if (_kbhit)
		{
			a = _getch();
			if (a == 'a' || a == 'A')
			{
				system("color A ");
				Beep(622.25, 850);
			}

			if (a == 's' || a == 'S')
			{
				system("color CB ");
				Beep(659.25, 325);
			}
			if (a == 'q' || a == 'Q')
			{
				system("color AC ");
				Beep(622.25, 200);
			}
		}
		if (a == 'e' || a == 'E')
		{
			system("color E ");
			Beep(493.88, 275);
		}

		if (a == 'w' || a == 'W')
		{
			system("color 35 ");
			Beep(415.30, 100);
		}
		///////////////////////////////////////////////////////////////////////////////////////////////////


		if (a == 'j' || a == 'J')
		{
			system("color DB ");
			Beep(659.25, 325);
		}
		if (a == 'h' || a == 'H')
		{
			system("color FC ");
			Beep(622.25, 185);
		}
	
	if (a == 'k' || a == 'K')
	{
		system("color 0F ");
		Beep(493.88, 250);
	}

	if (a == 'l' || a == 'L')
	{
		system("color 12 ");
		Beep(415.30, 75);
	}
		system("CLS");
	}

}
		

