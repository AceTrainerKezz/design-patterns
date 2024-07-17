#pragma once
#include "ISubject.h"
#include <list>

class Subject : public ISubject
{
public:
	virtual ~Subject();
	
	void Attach(IObserver* observer) override;

	void Detach(IObserver* observer) override;

	void Notify() override;

	void CreateMessage(std::string message);

	void HowManyObservers();

	void SomeBusinessLogic();

private:
	std::list<IObserver*> _observerList;

	std::string _message;
};

