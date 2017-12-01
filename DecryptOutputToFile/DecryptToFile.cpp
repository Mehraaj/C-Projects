//#include<iostream>
//#include<cstdlib>
//#include <time.h>
//#include <fstream>
//#include <string>
//#include "../../../VS Headers/Encryption.h"
//
//using namespace std;
//
//	int main() {
//		cout << "Enter a message: ";
//		char message[100];
//		cin.getline(message, 100);
//		int number[3][1], multiply[3][1], key[3][3], inverted[1][3];
//
//		ifstream Infile;
//		ofstream Outfile;
//		Outfile.open("Encrypted.txt");
//
//		if (!Outfile.is_open()) //checks if file is open, if it has something in it // . is calling for a specific function in an object 
//		{
//			cout << "Error. Encryption File is open. " << endl;
//			exit(1);
//		}
//
//		keygen(key);
//		for (int count = 0; count < strlen(message); count += 3) {
//			int m = 0;
//			number[0][0] = message[count];
//			number[1][0] = message[count + 1];
//			number[2][0] = message[count + 2];
//			addmatrix(number, key, multiply);
//		
//			for (int count = 0; count < 3; ++count)
//					Outfile << ++m << ": "<< multiply[count][0]<< endl;
//		}
//
//		Outfile.close();
//
//		
//
//		return 0;
//	}
//






#include "math.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <fstream>
#include "../../../VS Headers/Encryption.h"
#include "../../../VS Headers/Decryption.h"

using namespace std;

int main() {

	char message[100] = { ' ' };
	bool flag = true;
	cout << "Enter a message: ";
	cin.getline(message, 100);
	cout << message << endl; //debug code
	cout << "The string length is: " << strlen(message) << endl;
	cout << endl << "message: " << endl;
	for (int j = 0; j < strlen(message); j++)
	{
		cout << message[j] << " ";
	}
	cout << endl;
	//initialize all arrays to zero
	char number[3][1] = { 0, 0, 0 };

	int key[3][3];
	double inverse[3][3] = { 0, 0, 0, 0, 0, 0, 0,0, 0 };

	int cofactor[3][3] = { 0, 0, 0, 0, 0, 0, 0,0, 0 },
		ajoint[3][3] = { 0, 0, 0, 0, 0, 0, 0,0, 0 },
		minor[3][3] = { 0, 0, 0, 0, 0, 0, 0,0, 0 };




	keygen(key);
	//myinverse(key, minor, cofactor, ajoint, inverse, flag);
	int count = 0;
	for (int count = 0; count < strlen(message); count += 3) {
		double decryptedmatrix[3][1] = { 0, 0, 0 };
		double multiply[3][1] = { 0, 0, 0 };
		number[0][0] = message[count];
		number[1][0] = message[count + 1];
		number[2][0] = message[count + 2];
		///cout << endl << "number: " << endl;
		/*for (int j = 0; j < 3; j++)
		{
		cout << int(number[j][0]) << "  ";
		}
		cout << endl << endl;*/
		mymultiply(number, key, multiply);
		/*cout << "multiply: " << endl;
		cout << multiply[0][0] << endl;
		cout << multiply[1][0] << endl;
		cout << multiply[2][0] << endl;*/
		//cout << "LETS GO";
		myinverse(key, minor, cofactor, ajoint, inverse, flag);
		/*cout << endl << "key: " << endl;
		for (int i = 0; i < 3; i++)
		{
		for (int j = 0; j < 3; j++)
		{
		cout << key[i][j] << "  ";
		}
		cout << endl;
		}
		cout << endl << "inverse: " << endl;
		for (int i = 0; i < 3; i++)
		{
		for (int j = 0; j < 3; j++)
		{
		cout << inverse[i][j] << "  ";
		}
		cout << endl;
		}
		cout << endl << "multiply: " << endl;
		for (int i = 0; i < 3; i++)
		{
		for (int j = 0; j < 1; j++)
		{
		cout << multiply[i][j] << "  ";
		}
		cout << endl;
		}*/
		cout << endl << endl << "decrypted:" << endl;
		mydecryptedmatrix(inverse, multiply, decryptedmatrix);
		/*	cout << int(decryptedmatrix[0][0]) << endl;
		cout << int(decryptedmatrix[1][0]) << endl;
		cout << int(decryptedmatrix[2][0]) << endl;*/
		for (int i = 0; i < 3; i++)
			decryptedmatrix[i][0] = decryptedmatrix[i][0] + 0.5;
		cout << char(decryptedmatrix[0][0]) << endl;
		cout << char(decryptedmatrix[1][0]) << endl;
		cout << char(decryptedmatrix[2][0]) << endl;
			
	}
	return 0;
}




























/*int main()
{
	int number[3][1], multiply[3][1], key[3][3], inverted[1][3];
char input[80];
char temp[80];          //need this to read from the file 
string filename;
char answer;           //do u want to continue variable 

cout << "\t\WELCOME TO THE DECRYPTION!!" << endl;


	ofstream OutFile("Decryption", ios::app);

	if (!OutFile.is_open())
	{
		cout << "Error. File is open. " << endl;
		exit(1);
	}

	cout << "\n Displaying file " << "Decryption" << " contents" << endl;
	
	int message[100]; 
	ifstream InFile("C:\\Users\\mehra\\Documents\\Visual Studio 2015\\Projects\\Labs\\DecryptOutputToFile\\decryption.txt");
	InFile >> message[0];
	cout << message[0];
	//for (int count = 0; count < strlen(message); count += 3) {
		//number[0][0] = message[count];
		//number[1][0] = message[count + 1];
		//number[2][0] = message[count + 2];




	}*/
