NAME=app
OBJFILES=main.o AbstractUser.o Artist.o Event.o PremiumUser.o Printable.o StandartUser.o Ticket.o TicketApp.o

CC=g++
CFLAGS= 

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

all: $(NAME)

dep:
	$(CC) -MM *.cpp >dep.list

-include dep.list

$(NAME): $(OBJFILES)
	$(CC) $(CFLAGS) $(OBJFILES) -o $@


