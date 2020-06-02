#include"car.h"
void Car::InData(ifstream &ifst)
{
	try
	{
		ifst >> maxSpeed;
		if (maxSpeed <= 0 || maxSpeed > 1000)
			throw 1;
	}
	catch (int a)
	{
		std::cerr << "Max скорость ТС, не может быть меньше 1, или, больше 1000!\n";
		exit(1);
	}
	InCommon(ifst);
}