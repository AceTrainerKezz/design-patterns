#pragma once
#include "Transport.h"
class Logistics
{
public:
	void PlanDelivery();

	virtual Transport* CreateTransport() = 0;

};

