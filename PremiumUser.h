#pragma once

#include "StandartUser.h"

class PremiumUser : public StandartUser
{
public:
	PremiumUser(string n);

	void RefundTicket();
};

