#pragma once
#include "transport.h"
class Car : public Transport
{
	int maxSpeed;
public:
	int GetMaxSpeed() { return maxSpeed; }
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	double Ratio();
	// мультиметод
	void MultiMethod(Transport *other, ofstream &ofst);
	void MMCar(ofstream &ofst);
	void MMBus(ofstream &ofst);
	void MMTruck(ofstream &ofst);
	//Car() {}
};