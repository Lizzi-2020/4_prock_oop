#pragma once
#include "transport.h"
class Truck : public Transport {
	int power;
public:
	// �������������� ��������� ������
	int GetPower() { return power; }
	void InData(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	void OutTruck(ofstream &ofst);
	double Ratio();
	// �����������
	void MultiMethod(Transport *other, ofstream &ofst);
	void MMCar(ofstream &ofst);
	void MMBus(ofstream &ofst);
	void MMTruck(ofstream &ofst);
	//Truck() {} // �������� ��� �������������.
};