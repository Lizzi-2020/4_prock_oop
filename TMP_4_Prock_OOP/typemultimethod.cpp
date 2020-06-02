
#include "container.h"
#include "transport.h"
#include "bus.h"
#include "truck.h"
#include "car.h"


void Bus::MMBus(ofstream &ofst) {
	ofst << "BUS and BUS" << endl;
}
//-----------------------------------------------------
void Bus::MMTruck(ofstream &ofst) {
	ofst << "TRUCK and BUS" << endl;
}
//-----------------------------------------------------
void Bus::MMCar(ofstream &ofst) {
	ofst << "CAR and BUS" << endl;
}
//-----------------------------------------------------
void Truck::MMBus(ofstream &ofst) {
	ofst << "BUS and TRUCK" << endl;
}
//-----------------------------------------------------
void Truck::MMTruck(ofstream &ofst) {
	ofst << "TRUCK and TRUCK" << endl;
}
//-----------------------------------------------------
void Truck::MMCar(ofstream &ofst) {
	ofst << "CAR and TRUCK" << endl;
}
//-----------------------------------------------------
void Car::MMCar(ofstream &ofst) {
	ofst << "CAR and CAR" << endl;
}
//-----------------------------------------------------
void Car::MMBus(ofstream &ofst) {
	ofst << "BUS and CAR" << endl;
}
//-----------------------------------------------------
void Car::MMTruck(ofstream &ofst) {
	ofst << "TRUCK and CAR" << endl;
}