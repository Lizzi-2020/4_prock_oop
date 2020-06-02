#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Transport {
	int powerEngine;
	double fuelConsumption;
public:
	// иденитфикация, порождение и ввод фигуры из потока
	int GetPowerEngine() { return powerEngine; }
	double GetFuelConsumption() { return fuelConsumption; }
	static Transport* In(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0; // ввод
	virtual void Out(ofstream &ofst) = 0; // вывод
	virtual void OutTruck(ofstream &ofst);
	virtual double Ratio() = 0;
	bool Compare(Transport &other);
	void OutCommon(ofstream &ofst);
	void InCommon(ifstream &ifst);
	//мультиметод
	virtual void MultiMethod(Transport *other, ofstream &ofst) = 0;
	virtual void MMCar(ofstream &ofst) = 0;
	virtual void MMBus(ofstream &ofst) = 0;
	virtual void MMTruck(ofstream &ofst) = 0;
	//protected:
		//shape() {};
};