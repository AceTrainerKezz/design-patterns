#pragma once
#include <string>

// AKA the subscriber
class IObserver
{
public:
	virtual ~IObserver() { };
	virtual void Update(const std::string& message_from_subject) = 0;
};

