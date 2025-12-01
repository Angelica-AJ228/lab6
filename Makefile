CC = gcc
CFLAGS = -Wall -Wextra -std=c11

OBJ = main.o person.o functions.o

all: Person

Person: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o Person

main.o: main.c Person.h functions.h
	$(CC) $(CFLAGS) -c main.c

Person.o: Person.c person.h
	$(CC) $(CFLAGS) -c Person.c

functions.o: functions.c functions.h Person.h
	$(CC) $(CFLAGS) -c functions.c

valgrind: Person
	valgrind --leak-check=full --show-leak-kinds=all ./Person

clean:
	rm -f *.o Person

