#include "bus.h"
void Bus::Out(ofstream &ofst) {
	ofst << "It is bus: Size = " << size;
	OutCommon(ofst);
}