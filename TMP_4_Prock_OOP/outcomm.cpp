#include "transport.h"
void Transport::OutCommon(ofstream &ofst) {
	ofst << ", Power engine = " << powerEngine << ", Fuel consumption = " << fuelConsumption << "/100km" << std::endl;
	ofst << "Ratio = " << Ratio() << endl;
}