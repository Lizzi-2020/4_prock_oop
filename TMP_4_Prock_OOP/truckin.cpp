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
		std::cerr << "�������� ��, �� ����� ���� ������ 1, ���, ������ 1000!\n";
		exit(1);
	}
	InCommon(ifst);
}
