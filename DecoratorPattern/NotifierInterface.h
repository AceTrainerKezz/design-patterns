#pragma once
#include <string>


class NotifierInterface
{
public:
	virtual ~NotifierInterface() { };
	virtual void SendMessage(std::string message) const = 0;

};

