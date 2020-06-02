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
		std::cerr << "�������� ��������� �� ������ ���� �� ������ 0 � �� ������ 1000";
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
		std::cerr << "������ ������� �� ������ ���� �� ������ 0 � �� ������ 1000";
		exit(1);
	}
}