#pragma once
#include "IObserver.h"
#include "Subject.h"

class Observer : public IObserver
{
public:
	Observer(Subject& subject);
	virtual ~Observer();

	void Update(const std::string& messageFromSubject) override;

	void RemoveMeFromTheList();

	void PrintInfo();



private:
	std::string _messageFromSubject;
	Subject& _subject;
	static int s_number;
	int _number;
};

