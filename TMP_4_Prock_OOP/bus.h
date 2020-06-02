#pragma once
#include "transport.h"
class Bus : public Transport {
	int size;
public:
	// переопределяем интерфейс класса
	int GetSize() { return  size; };
	void InData(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	double Ratio();
	// мультиметод
	void MultiMethod(Transport *other, ofstream &ofst);
	void MMCar(ofstream &ofst);
	void MMBus(ofstream &ofst);
	void MMTruck(ofstream &ofst);
	//Bus() {} // создание без инициализации.
};