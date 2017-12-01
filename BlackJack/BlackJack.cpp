#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>


using namespace std;


int main()

{

	int j, L, o = 0, t = 2, thr = 3, f = 4, fiv = 5, six = 6, sev = 7, e = 8, n = 9, x = 0, sum1 = 0, sum2 = 0, R1, R2, w = 10;
	string q = "Two", v = "Three", b = "Four", k = "five", l = "six", u = "seven", p = "eight", i = "nine", g = "Ten";
	string y;
	y = "ace";


	srand(time(0));

	for (1; x < 2; x++)
	{
		setw(1);

		R1 = (1 + rand() % 10);
		sum1 += R1;



		switch (R1)
		{
		case 1:
			cout << "You drew an " << y << ". Your current sum is " << sum1 << "." << endl;
			break;
		case 2:
			cout << "You drew a " << q << ". Your current sum is " << sum1 << "." << endl;
			break;
		case 3:
			cout << "You drew a " << v << ". Your current sum is " << sum1 << "." << endl;
			break;
		case 4:
			cout << "You drew a " << b << ". Your current sum is " << sum1 << "." << endl;
			break;
		case 5:
			cout << "You drew a " << k << ". Your current sum is " << sum1 << "." << endl;
			break;
		case 6:
			cout << "You drew a " << l << ". Your current sum is " << sum1 << "." << endl;
			break;
		case 7:
			cout << "You drew a " << u << ". Your current sum is " << sum1 << "." << endl;
			break;
		case 8:
			cout << "You drew an " << p << ". Your current sum is " << sum1 << "." << endl;
			break;
		case 9:
			cout << "You drew an " << i << ". Your current sum is " << sum1 << "." << endl;
			break;
		case 10:
			cout << "You drew a " << g << ". Your current sum is " << sum1 << "." << endl;
			break;
		}

	}

	for (1; o < 2; o++)
	{
		setw(1);

		R2 = (1 + rand() % 10);
		sum2 += R2;



		switch (R2)
		{
		case 1:
			cout << "I know my new sum. " << endl;
			break;
		case 2:
			cout << "I know my new sum. " << endl;
			break;
		case 3:
			cout << "I know my new sum. " << endl;
			break;
		case 4:
			cout << "I know my new sum. " << endl;
			break;
		case 5:
			cout << "I know my new sum. " << endl;
			break;
		case 6:
			cout << "I know my new sum. " << endl;
			break;
		case 7:
			cout << "I know my new sum. " << endl;
			break;
		case 8:
			cout << "I know my new sum. " << endl;
			break;
		case 9:
			cout << "I know my new sum. " << endl;
			break;
		case 10:
			cout << "I know my new sum. " << endl;
			break;
		}
	}
	while (sum1<16)
	{
		R1 = (1 + rand() % 10);
		sum1 += R1;

		cout << "Your sum is less than 16, so we are drawing a new card. Your new sum is " << sum1 << endl;
	}



	while (sum2< 16)
	{
		setw(1);

		R2 = (1 + rand() % 10);
		sum2 += R1;
		cout << "My sum is less than 16, so we are drawing a new card." << endl;
	}

	cout << "Would you like another card? Your sum needs to be less than 21 to win, however greater than mine. (type 1 for yes and 0 for no.)" << endl;


	cin >> j;

	if (j == 1)
	{
		R1 = (1 + rand() % 10);
		sum1 += R1;
		cout << "Your new sum is: " << sum1 << endl;

		if (sum1 >= 21)

			cout << "You lose. Would you like to play again? (1 for yes, 0 for no)" << endl;
		cin >> L;
		if (L == 1)
			return;
		else
			return 0;
		







	}



	return 0;
}



