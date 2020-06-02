#include "bus.h"
#include "truck.h"
#include "car.h"
void Bus::MultiMethod(Transport *other, ofstream &ofst) 
{
	other->MMBus(ofst);
}void Truck::MultiMethod(Transport *other, ofstream &ofst) 
{
	other->MMTruck(ofst);
}
void Car::MultiMethod(Transport *other, ofstream &ofst)
{
	other->MMCar(ofst);
}