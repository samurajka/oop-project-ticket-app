# oop-project-ticket-app
project for 2024 OOP class

Aplikace pro nákup vstupenek na koncerty. Aplikace uchovává data o umělcích, koncertech a uživatelích. Uživatelé mohou zobrazovat informace a nakupovat vstupenky. Prémiový uživatel může reklamovat vstupenky.

Třída TicketApp má pole events(Event*), artists(Artist*), users(AbstractUser*). Zároveň třída počítá počet celkových uživatelů. Třída může vytvářet nové uživatele, umělce a události. Artist a Event dědí z čistě abstraktní třidy Printable a definují funkci Print(), která do konzole vypíše informace o instanci třidy. Artist má pole albums(string) a metodu AddAlbum(string name), která do pole přidá album. Třída StandartUser má pole tickets(Ticket*) a metody BuyTicket(Event* event) a ShowTickets(), díky kterým může nakupovat vstupenky a zobrazovat zakoupené vstupenky. Třída PremiumUser dědí z StandartUser a navíc může reklamovat vstupenky pomocí metody RefundTicket(string name) a taky se mu počítá statisktika zakoupených vstupenek.

1. download/clone repo
2. run make
3. run ./app
