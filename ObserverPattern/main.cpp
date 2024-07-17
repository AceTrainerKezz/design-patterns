#include "Observer.h"
#include "Subject.h"

int Observer::s_number = 0;

void ClientCode();

int main()
{
	ClientCode();
	return 0;
}

void ClientCode()
{
	Subject* subject = new Subject;
	Observer* observer1 = new Observer(*subject);
	Observer* observer2 = new Observer(*subject);
	Observer* observer3 = new Observer(*subject);
	Observer* observer4;
	Observer* observer5;

	subject->CreateMessage("Hello World! XD");
	observer3->RemoveMeFromTheList();

	subject->CreateMessage("The weather is hot today! ^_^");
	observer4 = new Observer(*subject);

	observer2->RemoveMeFromTheList();
	observer5 = new Observer(*subject);

	subject->CreateMessage("My new car is great! >_<");
	observer5->RemoveMeFromTheList();

	observer4->RemoveMeFromTheList();
	observer1->RemoveMeFromTheList();

	delete observer5;
	delete observer4;
	delete observer3;
	delete observer2;
	delete observer1;
	delete subject;
}
