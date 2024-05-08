#pragma once

#include "AbstractUser.h"
#include "Ticket.h"

class StandartUser : public AbstractUser
{
protected:
	vector<Ticket*> tickets;
public:
	StandartUser(string n);

	virtual void BuyTicket(Event* e);
	virtual void ShowMyTickets();
};

