#include "Event.h"

Event::Event(string n, Artist* a, string l, int t, int tp) {
	this->name = n;
	this->artist = a;
	this->location = l;
	this->ticketsLeft = t;
	this->ticketPrice = tp;
}

Event::~Event() {

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

void Event::Print() {
	cout << "The event " + this->name + " will take place at " + this->location + " the performing artist is " + this->artist->GetName() << endl;
	cout << "There are " + to_string(this->ticketsLeft) + " tickets left and the price is " + to_string(this->ticketPrice) + " czk" << endl;
}