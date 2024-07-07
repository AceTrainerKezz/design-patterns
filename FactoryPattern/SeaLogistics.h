#pragma once
#include "Logistics.h"

class SeaLogistics : public Logistics
{
public:
	Transport* CreateTransport() override;
};

