CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude

SRC = src/main.c src/Person.c src/functions.c
OBJ = $(SRC:.c=.o)

all: Person

Person: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o Person

src/main.o: src/main.c include/Person.h include/functions.h
	$(CC) $(CFLAGS) -c src/main.c -o src/main.o

src/Person.o: src/Person.c include/Person.h
	$(CC) $(CFLAGS) -c src/Person.c -o src/Person.o

src/functions.o: src/functions.c include/functions.h include/Person.h
	$(CC) $(CFLAGS) -c src/functions.c -o src/functions.o

valgrind: Person
	valgrind --leak-check=full --show-leak-kinds=all ./Person

clean:
	rm -f src/*.o Person

