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
		}
	}
}
