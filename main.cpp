#include "Artist.h"
#include "Event.h"
#include "StandartUser.h"
#include "TicketApp.h"

int main() {

	TicketApp* App = new TicketApp();
	
	App->CreateArtist("Rest", "Rap");
	App->GetArtist("Rest")->AddAlbum("Premiera");
	App->GetArtist("Rest")->AddAlbum("Strepy");
	App->GetArtist("Rest")->AddAlbum("Restart");
	App->GetArtist("Rest")->AddAlbum("Tlak");
	App->GetArtist("Rest")->Print();

	cout << endl;

	App->CreateArtist("Hollywood Undead", "Rock");
	App->GetArtist("Hollywood Undead")->AddAlbum("Swan Songs");
	App->GetArtist("Hollywood Undead")->AddAlbum("American Tragedy");
	App->GetArtist("Hollywood Undead")->AddAlbum("Notes From The Underground");
	App->GetArtist("Hollywood Undead")->AddAlbum("Day Of The Dead");
	App->GetArtist("Hollywood Undead")->Print();

	cout << endl;

	App->CreateArtist("100 Gecs", "Hyperpop");
	App->GetArtist("100 Gecs")->AddAlbum("1000 Gecs");
	App->GetArtist("100 Gecs")->AddAlbum("10,000 Gecs");
	App->GetArtist("100 Gecs")->Print();

	cout << endl;

	App->CreateArtist("Hatsune Miku", "Vocaloid");
	App->GetArtist("Hatsune Miku")->Print();

	cout << endl;
	
	App->CreateStandartUser("Pepa");
	App->CreateStandartUser("Marek");
	App->CreateStandartUser("Matyas");
	App->CreatePremiumUser("Hikaru");
	App->CreateStandartUser("Kristyna");

	App->CreateEvent("Rock Concert", App->GetArtist("Hollywood Undead"), "Tipsport Arena", 500, 500);
	App->CreateEvent("Rap Vecer", App->GetArtist("Rest"), "Klub Ctyrka", 3, 100);
	App->CreateEvent("Gecs", App->GetArtist("100 Gecs"), "Music Bar Drago", 10, 200);
	App->ShowEvents();

	cout << endl;

	App->GetStaUser("Pepa")->BuyTicket(App->GetEvent("Rock Concert"));
	App->GetStaUser("Pepa")->BuyTicket(App->GetEvent("Gecs"));
	App->GetStaUser("Pepa")->BuyTicket(App->GetEvent("Rap Vecer"));
	App->GetStaUser("Pepa")->ShowMyTickets();

	cout << endl;
	App->GetEvent("Rap Vecer")->Print();
	cout << endl;

	App->GetStaUser("Marek")->BuyTicket(App->GetEvent("Rap Vecer"));
	App->GetPreUser("Hikaru")->BuyTicket(App->GetEvent("Rap Vecer"));

	cout << endl;
	App->GetEvent("Rap Vecer")->Print();
	cout << endl;

	App->GetStaUser("Kristyna")->BuyTicket(App->GetEvent("Rap Vecer"));
	App->GetPreUser("Hikaru")->RefundTicket("Rap Vecer");

	cout << endl;
	App->GetEvent("Rap Vecer")->Print();
	cout << endl;

	App->GetStaUser("Kristyna")->BuyTicket(App->GetEvent("Rap Vecer"));

	cout << endl;

	App->GetPreUser("Hikaru")->BuyTicket(App->GetEvent("Gecs"));
	App->GetPreUser("Hikaru")->BuyTicket(App->GetEvent("Rock Concert"));
	cout << App->GetPreUser("Hikaru")->GetTotalEventsVisited() << endl;


	delete App;

	return 0;
}