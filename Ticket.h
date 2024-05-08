#pragma once

#include "Event.h"

class Ticket : public Printable
{
private:
	Event* event;
public:
	Ticket(Event* e);
	void Print();
};

