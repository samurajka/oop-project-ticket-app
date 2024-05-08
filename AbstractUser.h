#pragma once

#include <string>
#include "Event.h"

using namespace std;

class AbstractUser
{
protected:
	string name;
public:
	virtual string GetName();

	virtual void BuyTicket(Event* e) = 0;
	virtual void ShowMyTickets() = 0;
};

