#include "truck.h"
void Truck::InData(ifstream &ifst) {
	try
	{
		ifst >> power;
		if (power <= 0 || power > 1000)
			throw 1;
	}
	catch (int a)
	{
		std::cerr << "Мощность ТС, не может быть меньше 1, или, больше 1000!\n";
		exit(1);
	}
	InCommon(ifst);
}
