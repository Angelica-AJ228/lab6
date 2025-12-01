CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude

SRC= src
OBJ = obj

OBJ = $(OBJ)/main.o $(OBJ)/person.o $(OBJ)/functions.o

all: Person

Person: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o Person

main.o: $(SRC)/main.c include/Person.h include/functions.h
	$(CC) $(CFLAGS) -c $(SRC)/main.c

Person.o: $(SRC)/Person.c include/person.h
	$(CC) $(CFLAGS) -c $(SRC)/Person.c

functions.o: $(SRC)/functions.c include/functions.h include/Person.h
	$(CC) $(CFLAGS) -c $(SRC)/functions.c

valgrind: Person
	valgrind --leak-check=full --show-leak-kinds=all ./Person

clean:
	rm -f *.o Person

