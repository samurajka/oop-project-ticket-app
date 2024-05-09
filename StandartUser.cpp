#include "StandartUser.h"

StandartUser::StandartUser(string n) {
	this->name = n;
}

StandartUser::~StandartUser() {
	int maxT = this->tickets.size();
	for (int i = 0; i < maxT; i++) {
		this->tickets[i] = nullptr;
	}
}

void StandartUser::BuyTicket(Event* e) {
	if (e->GetTicketsLeft() > 0) {
		this->tickets.push_back(new Ticket(e));
		e->TicketSold();
	}
}

void StandartUser::ShowMyTickets() {
	if (this->tickets.size() == 0) {
		cout << "You dont have any tickets" << endl;
		return;
	}

	cout << "You have tickets for the following events" << endl;
	for (int i = 0; i < this->tickets.size(); i++) {
		tickets[i]->Print();
	}
}