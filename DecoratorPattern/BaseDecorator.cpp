#include "BaseDecorator.h"

void BaseDecorator::SendMessage(std::string message) const
{
	_wrappee->SendMessage(message);
}
