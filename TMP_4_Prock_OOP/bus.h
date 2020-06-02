#pragma once
#include "transport.h"
class Bus : public Transport {
	int size;
public:
	// �������������� ��������� ������
	int GetSize() { return  size; };
	void InData(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	double Ratio();
	// �����������
	void MultiMethod(Transport *other, ofstream &ofst);
	void MMCar(ofstream &ofst);
	void MMBus(ofstream &ofst);
	void MMTruck(ofstream &ofst);
	//Bus() {} // �������� ��� �������������.
};