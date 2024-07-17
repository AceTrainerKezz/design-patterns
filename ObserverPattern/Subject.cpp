#include "Subject.h"
#include <iostream>

Subject::~Subject()
{
	std::cout << "Goodbye, I was the Subject.\n";
}

void Subject::Attach(IObserver* observer)
{
	_observerList.push_back(observer);
}

void Subject::Detach(IObserver* observer)
{
	_observerList.remove(observer);
}

void Subject::Notify()
{
	std::list<IObserver*>::iterator iterator = _observerList.begin();
	HowManyObservers();
	while (iterator != _observerList.end())
	{
		(*iterator)->Update(_message);
		++iterator;
	}
}

void Subject::CreateMessage(std::string message = "Empty")
{
	this->_message = message;
	Notify();
}

void Subject::HowManyObservers()
{
	std::cout << "There are " << _observerList.size() << " observers in the list.\n";
}

void Subject::SomeBusinessLogic()
{
	this->_message = "change message message";
	Notify();
	std::cout << "I'm about to do something important\n";
}
