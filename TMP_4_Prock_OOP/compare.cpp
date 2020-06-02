#include "Transport.h"
bool Transport::Compare(Transport &other)
{
	return Ratio()  < other.Ratio();
}
