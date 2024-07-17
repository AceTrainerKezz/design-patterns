#pragma once
#include "IObserver.h"

// AKA the Publisher
class ISubject
{
public:
	virtual ~ISubject() { };

	virtual void Attach(IObserver* observer) = 0;
	
	virtual void Detach(IObserver* observer) = 0;
	
	virtual void Notify() = 0;
};

