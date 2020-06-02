#include "truck.h"
void Truck::Out(ofstream &ofst) {
	ofst << "It is truck: Power = "	<< power ;
	OutCommon(ofst);
}