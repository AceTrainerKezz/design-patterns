#include "Truck.h"
#include "Ship.h"
#include "RoadLogistics.h"
#include "SeaLogistics.h"

int main()
{
	RoadLogistics rL;
	SeaLogistics sL;

	Transport* tOne = rL.CreateTransport();
	Transport* tTwo = sL.CreateTransport();

	tOne->Deliver();
	tTwo->Deliver();


	return 0;
}