#include "bus.h"
double Bus::Ratio()
{
	return (75 * size) / GetPowerEngine();
}