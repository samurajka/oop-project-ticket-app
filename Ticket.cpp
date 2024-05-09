#include "Ticket.h"

Ticket::Ticket(Event* e) {
	this->event = e;
}

void Ticket::Print() {
	cout << this->event->GetName() << endl;
}

string Ticket::GetName() {
	return this->event->GetName();
}

Event* Ticket::GetEvent() {
	return this->event;
}