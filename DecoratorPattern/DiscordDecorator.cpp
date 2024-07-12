#include "DiscordDecorator.h"
#include <iostream>

void DiscordDecorator::SendMessage(std::string message) const
{
	BaseDecorator::SendMessage(message);
	std::cout << "Sending Discord message...\n";
}
