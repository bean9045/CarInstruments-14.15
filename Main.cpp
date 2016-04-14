#include <iostream>

#include "Car.h"

using namespace std;

bool exit();

int main()
{
	cout << "Welcome to VIRTUAL TEST DRIVE!\nThe much anticipated homework assignment " << flush;
	//continued
	cout << "where you\ncan test the driving range of 5 different cars.\n" << endl;

	do
	{
		Car car;

		car.chooseCar();
		car.fillUp();
		car.drive();
		car.displayInfo();

	} while (!exit());

	return 0;
}
bool exit()
{
	bool exit;
	bool validInput;

	do
	{
		char answer;
		cout << "\nWould you like to exit? (y/n): " << flush;
		cin >> answer;

		switch (answer)
		{
		  case 'Y':
		  case 'y': cout << "Exiting..." << endl;
		  	  	    exit = true;
		  	  	    validInput = true;
		  	  	    break;
		  case 'N':
		  case 'n': cout << "Continuing...\n" << endl;
		  	  	  	exit = false;
		  	  	  	validInput = true;
		  	  	  	break;

		  default: cin.ignore(100, '\n');
		  	  	   cin.clear();
		  	  	   cout << "INVALID INPUT, PLEASE ENTER EITHER \"y\" OR \"n\"." << endl;
		  	  	   validInput = false;
		  	  	   break;
		}
	} while (!validInput);

	return exit;
}
