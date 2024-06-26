#pragma once

#include "Event.h"
#include "AbstractUser.h"
#include "PremiumUser.h"


class TicketApp
{
private:
	vector<Event*> events;
	vector<Artist*> artists;
	vector<AbstractUser*> users;

	static int userTotal;
public:
	TicketApp();
	~TicketApp();

	StandartUser* GetStaUser(string n);
	PremiumUser* GetPreUser(string n);
	Event* GetEvent(string n);
	Artist* GetArtist(string n);

	void ShowEvents();

	void CreateArtist(string n, string g);
	void CreateEvent(string n, Artist* a, string l, int t, int tp);
	void CreateStandartUser(string n);
	void CreatePremiumUser(string n);


};

