#ifndef FUELGAUGE_H_
#define FUELGAUGE_H_

class FuelGauge
{
  private:
	float fuelLvl;
	int mpg;
	int tankSize;

  public:
	FuelGauge();

	void setFuelLvl(float fuelLvl);
	bool isEmpty();

	void fillTank();
	int getFuelLvl();

	void setMpg(int mpg);
	int getMpg();

	void setTankSize(int tankSize);
	int getTankSize();

};

#endif
