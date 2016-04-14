#include <iostream>

#include "Odometer.h"

using namespace std;

Odometer::Odometer()
{
	mileage = 0;
}
Odometer::~Odometer()
{
	delete fuelGaugePtr;
}
FuelGauge* Odometer::getFuelGaugePtr()
{
	return fuelGaugePtr;
}
void Odometer::drive()
{
	float fuelLvl = fuelGaugePtr->getFuelLvl();
	float mpg = fuelGaugePtr->getMpg();

	while (!fuelGaugePtr->isEmpty())
	{
		fuelLvl -= static_cast<float>(1) / mpg;
		fuelGaugePtr->setFuelLvl(fuelLvl);
		mileage++;

		cout << "Mile #: " << mileage << flush;
		cout << " - " << "Gallons left: " << fuelLvl << endl;
	}
	if (mileage == LIMIT)
	{
		mileage = 0;
	}
}
int Odometer::getMileage()
{
	return mileage;
}
