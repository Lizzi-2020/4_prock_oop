#include "bus.h"
void Bus::InData(ifstream &ifst) {
	try
	{
		ifst >> size;
		if (size <= 0 || size > 200)
			throw 1;
	}
	catch (int a)
	{
		std::cerr << "����������� ������������� ��������, (�������) �� ����� ���� ������ 1, ���, ������ 200!\n";
		exit(1);
	}
	InCommon(ifst);
}