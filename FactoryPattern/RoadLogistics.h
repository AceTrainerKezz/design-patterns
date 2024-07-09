#pragma once
#include "Logistics.h"
class RoadLogistics : public Logistics
{
public:
	Transport* CreateTransport() override;
};

