#include "transport.h"
void Transport::InCommon(ifstream &ifst) {
	//ifst >> powerEngine >> fuelConsumption;
	try
	{
		ifst >> powerEngine;
		if (powerEngine <= 0 || powerEngine > 1000)
			throw 1;
	}
	catch (int a)
	{
		std::cerr << "Мощность двигателя ТС должна быть не меньше 0 и не больше 1000";
		exit(1);
	}
	try
	{
		ifst >> fuelConsumption;
		if (fuelConsumption <= 0 || fuelConsumption > 1000)
			throw 1;
	}
	catch (int a)
	{
		std::cerr << "Расход топлива ТС должен быть не меньше 0 и не больше 1000";
		exit(1);
	}
}