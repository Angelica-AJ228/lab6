#ifndef PERSON_H
#define PERSON_H

typedef struct {
	char name[50];
	int age;
	double height;

} Person;

void print_people(Person arr[], int n);

#endif
