#include "Ticket.h"

Ticket::Ticket(Event* e) {
	this->event = e;
}

void Ticket::Print() {
	cout << this->event->GetName() << endl;
}