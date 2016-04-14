#include "FuelGauge.h"

FuelGauge::FuelGauge()
{
	fuelLvl = 0;
	tankSize = 15;
	mpg = 24;
}
void FuelGauge::setFuelLvl(float fuelLvl)
{
	this->fuelLvl = fuelLvl;
}
bool FuelGauge::isEmpty()
{
	bool isEmpty;

	if (fuelLvl < 0.1)
	{
		isEmpty = true;

	} else
	{
		isEmpty = false;
	}
	return isEmpty;
}
void FuelGauge::fillTank()
{
	for (float k = fuelLvl; k < tankSize; k++)
	{
		fuelLvl++;
	}
}
int FuelGauge::getFuelLvl()
{
	return fuelLvl;
}
void FuelGauge::setMpg(int mpg)
{
	this->mpg = mpg;
}
int FuelGauge::getMpg()
{
	return mpg;
}
void FuelGauge::setTankSize(int tankSize)
{
	this->tankSize = tankSize;
}
int FuelGauge::getTankSize()
{
	return tankSize;
}
