#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int SystemNumber;
	string playagain;
	srand(time(NULL));
	SystemNumber = rand() % 1000 + 1;
	int guess;
	int again = 0;
	int x;

	for ( x = 0; again == 0; x++)
	{
		cout << "Please enter a number between 1 and 1000:" << endl;
	
		cin >> guess;
			

		if (guess < SystemNumber)
		{
			cout << "The number is too low" << endl;
			//cout << "number of tries:" << x+1 << endl;

		}

		else if (guess > SystemNumber)
		{
			cout << "The number is too high" << endl;
			//cout << "number of tries:" << x+1 << endl;
		}

		else if (guess == SystemNumber)
		{
			cout << "Good job! You guessed the number, type yes to play again." << endl;
			cout <<"number of tries:"<< x+1 << endl;
			cin >> playagain;
		
			if (playagain.compare("yes") == 0) {
				again = 0;
				x = 0;
				SystemNumber = rand() % 1000 + 1;
			}
			else {
				;
			}
			}

		}
	}
	