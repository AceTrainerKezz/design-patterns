#pragma once
#include "BaseDecorator.h"

class SMSDecorator : public BaseDecorator
{
public:
	SMSDecorator(NotifierInterface* notifier) : BaseDecorator(notifier) { };

	void SendMessage(std::string message) const override;

};

