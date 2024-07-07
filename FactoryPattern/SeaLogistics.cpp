#include "SeaLogistics.h"
#include "Ship.h"

Transport* SeaLogistics::CreateTransport()
{
	return new Ship();
}
