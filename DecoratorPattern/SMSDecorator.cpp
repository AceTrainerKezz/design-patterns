#include "SMSDecorator.h"
#include <iostream>

void SMSDecorator::SendMessage(std::string message) const
{
	BaseDecorator::SendMessage(message);
	std::cout << "Sending SMS message...\n";
}