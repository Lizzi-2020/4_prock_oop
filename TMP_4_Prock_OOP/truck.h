#pragma once
#include "transport.h"
class Truck : public Transport {
	int power;
public:
	// переопределяем интерфейс класса
	int GetPower() { return power; }
	void InData(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	void OutTruck(ofstream &ofst);
	double Ratio();
	// мультиметод
	void MultiMethod(Transport *other, ofstream &ofst);
	void MMCar(ofstream &ofst);
	void MMBus(ofstream &ofst);
	void MMTruck(ofstream &ofst);
	//Truck() {} // создание без инициализации.
};