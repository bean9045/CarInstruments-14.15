#ifndef ODOMETER_H_
#define ODOMETER_H_

#include "FuelGauge.h"

class Odometer
{
  private:
	int mileage;
	const int LIMIT = 999999;
	FuelGauge* fuelGaugePtr = new FuelGauge;

  public:
	Odometer();
	~Odometer();

	FuelGauge* getFuelGaugePtr();

	void drive();
	int getMileage();
};

#endif
