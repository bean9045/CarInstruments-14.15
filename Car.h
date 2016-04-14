#ifndef CAR_H_
#define CAR_H_

#include <iostream>

#include "Odometer.h"

using namespace std;

class Car
{
  private:
	string carName;
	Odometer* odometerPtr = new Odometer;

  public:
	~Car();

	void chooseCar();
	string getCarName();

	void fillUp();
	void drive();
	void displayInfo();
};

#endif
