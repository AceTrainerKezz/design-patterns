#include "RoadLogistics.h"
#include "Truck.h"

Transport* RoadLogistics::CreateTransport()
{
	return new Truck();
}