#include "TicketApp.h"

TicketApp::TicketApp() {

}

TicketApp::~TicketApp() {
	int maxU = this->users.size();
	for (int i = 0; i < maxU; i++) {
		delete this->users[i];
	}

	int maxA = this->artists.size();
	for (int i = 0; i < maxA; i++) {
		delete this->artists[i];
	}

	int maxE = this->events.size();
	for (int i = 0; i < maxE; i++) {
		delete this->events[i];
	}

}

void TicketApp::CreateArtist(string n, string g) {
	this->artists.push_back(new Artist(n, g));
}

void TicketApp::CreateEvent(string n, Artist* a, string l, int t, int tp) {
	this->events.push_back(new Event(n, a, l, t, tp));
}

void TicketApp::CreateStandartUser(string n) {
	this->users.push_back(new StandartUser(n));
}

void TicketApp::CreatePremiumUser(string n) {
	this->users.push_back(new PremiumUser(n));
}

void TicketApp::ShowEvents() {
	if (this->events.size() == 0) {
		cout << "there are no events at the moment" << endl;
		return;
	}

	cout << "these are the avalaible events:" << endl;
	for (int i = 0; i < this->events.size(); i++) {
		cout << this->events[i]->GetName() << endl;
	}
}

Artist* TicketApp::GetArtist(string n) {
	for (int i = 0; i < this->artists.size(); i++) {
		if (this->artists[i]->GetName() == n) {
			return this->artists[i];
		}
	}
	return nullptr;
}

Event* TicketApp::GetEvent(string n) {
	for (int i = 0; i < this->events.size(); i++) {
		if (this->events[i]->GetName() == n) {
			return this->events[i];
		}
	}
	return nullptr;
}

StandartUser* TicketApp::GetStaUser(string n) {
	for (int i = 0; i < this->users.size(); i++) {
		if (this->users[i]->GetName() == n) {
			return (StandartUser*) this->users[i];
		}
	}
	return nullptr;
}

PremiumUser* TicketApp::GetPreUser(string n) {
	for (int i = 0; i < this->users.size(); i++) {
		if (this->users[i]->GetName() == n) {
			return (PremiumUser*) this->users[i];
		}
	}
	return nullptr;
}