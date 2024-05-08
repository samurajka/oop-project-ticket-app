#pragma once

#include "Artist.h"

class Event
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

	void ArtistInfo();
	int GetTicketsLeft();
	void TicketSold();
	void TicketRefunded();
	string GetName();
};

