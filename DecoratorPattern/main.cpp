
#include "NotifierInterface.h"
#include "EmailNotifier.h"
#include "SMSDecorator.h"
#include "DiscordDecorator.h"
#include <iostream>

void ClientOperation(NotifierInterface*, std::string);

int main()
{
	NotifierInterface* messageNotifier = new EmailNotifier();

	std::cout << "Client: I've got a email notification ready:\n";

	ClientOperation(messageNotifier, "Hello World!\n");

	NotifierInterface* messageNotifier1 = new SMSDecorator(messageNotifier);
	NotifierInterface* messageNotifier2 = new DiscordDecorator(messageNotifier1);

	std::cout << "Client: The notification has been decorated:\n";
	ClientOperation(messageNotifier2, "Hello World!\n");

	delete messageNotifier;
	delete messageNotifier1;
	delete messageNotifier2;

	return 0;
}

void ClientOperation(NotifierInterface* notifier, std::string message)
{
	notifier->SendMessage(message);
}