#pragma once
#include "BaseDecorator.h"
class DiscordDecorator : public BaseDecorator
{
public:
	DiscordDecorator(NotifierInterface* notifier) : BaseDecorator(notifier) { };

	void SendMessage(std::string message) const override;

};

