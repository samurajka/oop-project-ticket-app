#include "PremiumUser.h"

PremiumUser::PremiumUser(string n) : StandartUser(n) {

}

PremiumUser::~PremiumUser() {
	int maxT = this->tickets.size();
	for (int i = 0; i < maxT; i++) {
		this->tickets[i] = nullptr;
	}
}

void PremiumUser::RefundTicket(string n) {
	for (int i = 0; i < this->tickets.size(); i++) {
		if (this->tickets[i]->GetName() == n) {
			this->tickets[i]->GetEvent()->TicketRefunded();
			this->tickets.erase(this->tickets.begin() + i);
			this->totalEventsVisited--;
			cout << "Ticket refunded" << endl;
		}
	}
	
}

int PremiumUser::GetTotalEventsVisited() {
	return this->totalEventsVisited;
}

void PremiumUser::BuyTicket(Event* e) {
	if (e->GetTicketsLeft() > 0) {
		this->tickets.push_back(new Ticket(e));
		e->TicketSold();
		this->totalEventsVisited++;
		cout << "Ticket purchased" << endl;
	}
}