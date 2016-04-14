#include <iostream>

#include "Car.h"
#include "Odometer.h"

using namespace std;

Car::~Car()
{
	delete odometerPtr;
}
void Car::chooseCar()
{
	int answer;
	cout << "To choose which vehicle you'd like to test simply input their respective number and press <ENTER>." << endl;
	cout << "1. Toyota Camry" << endl;
	cout << "2. Dodge RAM 1500" << endl;
	cout << "3. Bugatti Veyron" << endl;
	cout << "4. Suburu WRX STI" << endl;
	cout << "5. Hummer H3" << endl;

	bool validInput;
	do
	{
		cin >> answer;

		switch (answer)
		{
		  case 1: carName = "Toyota Camry";
		  	  	  odometerPtr->getFuelGaugePtr()->setTankSize(17);
		  	  	  odometerPtr->getFuelGaugePtr()->setMpg(30);
		  	  	  validInput = true;
		  	  	  break;

		  case 2: carName = "Dodge RAM";
		  	  	  odometerPtr->getFuelGaugePtr()->setTankSize(29);
		  	  	  odometerPtr->getFuelGaugePtr()->setMpg(17);
		  	  	  validInput = true;
		  	  	  break;

		  case 3: carName = "Bugatti Veyron";
		  	  	  odometerPtr->getFuelGaugePtr()->setTankSize(26);
		  	  	  odometerPtr->getFuelGaugePtr()->setMpg(11);
		  	  	  validInput = true;
		  	  	  break;

		  case 4: carName = "Suburu WRX STI";
		  	  	  odometerPtr->getFuelGaugePtr()->setTankSize(17);
		  	  	  odometerPtr->getFuelGaugePtr()->setMpg(20);
		  	  	  validInput = true;
		  	  	  break;

		  case 5: carName = "Hummer H3";
		  	  	  odometerPtr->getFuelGaugePtr()->setTankSize(23);
		  	  	  odometerPtr->getFuelGaugePtr()->setMpg(16);
		  	  	  validInput = true;
		  	  	  break;

		  default: cin.ignore(100, '\n');
		  	  	   cin.clear();
		  	  	   validInput = false;
		  	  	   cout << "INVALID INPUT. Please enter a number between \"1\" and \"5\"." << endl;
		}
	} while (!validInput);
}
string Car::getCarName()
{
	return carName;
}
void Car::fillUp()
{
	odometerPtr->getFuelGaugePtr()->fillTank();
}
void Car::drive()
{
	odometerPtr->drive();
}
void Car::displayInfo()
{
	cout << "\nWith a " << odometerPtr->getFuelGaugePtr()->getTankSize() << " gallon tank size" << flush;
	cout << " and an approximate efficiency rating of " << odometerPtr->getFuelGaugePtr()->getMpg() << flush;
	cout << " miles per gallon.\nThe " << carName << " made it about " << odometerPtr->getMileage() << " miles." << endl;
}
