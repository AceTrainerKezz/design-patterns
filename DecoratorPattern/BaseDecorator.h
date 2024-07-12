#pragma once
#include "NotifierInterface.h"

class BaseDecorator : public NotifierInterface
{
public:
	BaseDecorator(NotifierInterface* notifier) : _wrappee(notifier) { };

	void SendMessage(std::string message) const override;

protected:
	NotifierInterface* _wrappee;
};

