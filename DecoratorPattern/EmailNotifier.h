#pragma once
#include "NotifierInterface.h"

class EmailNotifier : public NotifierInterface
{
public:
	
	void SendMessage(std::string message) const override;

};

