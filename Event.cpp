#include "Event.h"

Event::Event(string n, Artist* a, string l, int t, int tp) {
	this->name = n;
	this->artist = a;
	this->location = l;
	this->ticketsLeft = t;
	this->ticketPrice = tp;
}

void Event::ArtistInfo() {
	this->artist->Print();
}

int Event::GetTicketsLeft() {
	return this->ticketsLeft;
}

void Event::TicketSold() {
	if (this->ticketsLeft > 0) {
		this->ticketsLeft--;
	}
}

void Event::TicketRefunded() {
	this->ticketsLeft++;
}

string Event::GetName() {
	return this->name;
}