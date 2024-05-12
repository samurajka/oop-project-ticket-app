#pragma once

#include "StandartUser.h"

class PremiumUser : public StandartUser
{
public:
	int totalEventsVisited = 0;

	PremiumUser(string n);
	virtual ~PremiumUser();

	int GetTotalEventsVisited();
	void RefundTicket(string n);
	void BuyTicket(Event* e);

};

