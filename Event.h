#pragma once

#include "Artist.h"
#include "Printable.h"

class Event : public Printable
{
private:
	string name;
	Artist* artist;
	string location;
	int ticketsLeft;
	int ticketPrice;
public:
	Event(string n, Artist* a, string l, int t,int tp);
	~Event();

	void Print();

	void ArtistInfo();
	int GetTicketsLeft();
	void TicketSold();
	void TicketRefunded();
	string GetName();
};

