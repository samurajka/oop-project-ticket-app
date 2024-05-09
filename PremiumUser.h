#pragma once

#include "StandartUser.h"

class PremiumUser : public StandartUser
{
public:
	PremiumUser(string n);
	virtual ~PremiumUser();

	void RefundTicket(string n);
};

