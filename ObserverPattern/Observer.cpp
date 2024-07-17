#include "Observer.h"
#include <iostream>

Observer::Observer(Subject& subject) : _subject(subject)
{
	this->_subject.Attach(this);
	std::cout << "Hi, I'm the observer \"" << ++Observer::s_number << "\".\n";
	this->_number = Observer::s_number;
}

Observer::~Observer()
{
	std::cout << "Goodbye, I was the Observer \"" << this->_number << "\".\n";
}

void Observer::Update(const std::string& messageFromSubject)
{
	_messageFromSubject = messageFromSubject;
	PrintInfo();
}

void Observer::RemoveMeFromTheList()
{
	_subject.Detach(this);
	std::cout << "Observer \"" << _number << "\" removed from the list.\n";
}

void Observer::PrintInfo()
{
	std::cout << "Observer \"" << this->_number << "\": a new message is available --> " << this->_messageFromSubject << "\n";
}
