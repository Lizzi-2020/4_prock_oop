#include "car.h"
void Car::Out(ofstream &ofst)
{
	ofst << "It is car: Max speed = " << maxSpeed;
	OutCommon(ofst);
}