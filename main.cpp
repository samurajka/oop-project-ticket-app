#include "Artist.h"
#include "Event.h"
#include "StandartUser.h"
#include "TicketApp.h"

int main() {

	/*
	Artist* art1 = new Artist("Rest", "Rap");

	art1->AddAlbum("Restart");
	art1->AddAlbum("Tlak");

	art1->Print();

	Event* ev1 = new Event("Super Event", art1, "Nejaky Klub", 50, 100);

	ev1->ArtistInfo();

	StandartUser* su1 = new StandartUser("Standa");
	
	su1->ShowMyTickets();
	su1->BuyTicket(ev1);
	su1->ShowMyTickets();
	*/

	TicketApp* App = new TicketApp();

	App->CreateArtist("Hatsune Miku", "idk");
	App->CreateEvent("Vocaloid Concert", App->GetArtist("Hatsune Miku"), "Klub 4", 100, 150);
	App->ShowEvents();

	App->CreateStandartUser("Pan Standartni");
	App->GetUser("Pan Standartni")->BuyTicket(App->GetEvent("Vocaloid Concert"));
	App->GetUser("Pan Standartni")->ShowMyTickets();


	return 0;
}