#include "EmailNotifier.h"
#include <iostream>


void EmailNotifier::SendMessage(std::string message) const
{
	std::cout << "Sending email notification...\n" + message;
}