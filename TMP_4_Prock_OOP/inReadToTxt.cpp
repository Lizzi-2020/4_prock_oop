#include "transport.h"
#include "bus.h"
#include "truck.h"
#include "car.h"
Transport* Transport::In(ifstream &ifst) {
	Transport *sp;
	int k;
	try
	{
		ifst >> k;
		if (k > 3 || k <= 0)
			throw 1;
	}
	catch (int a)
	{
		std::cerr << "Ќеверный формат типа транспортного средства!\n";
		exit(1);
	}

	switch (k) {
	case 1:
		sp = new Bus; break;
	case 2:
		sp = new Truck; break;
	case 3:
		sp = new Car; break;
	default:
		return 0;
	}
	sp->InData(ifst);

	return sp;
}
