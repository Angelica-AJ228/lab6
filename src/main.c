#include <stdio.h>
#include <stdlib.h>
#include "Person.h"
#include "functions.h"

int main() {

	Person people[5] = {
		{"Carlos", 45, 165.4},
		{"Belle", 34, 170.0},
		{"Leo", 21, 190.4},
		{"Esteban", 27, 175.8},
		{"Ana", 50, 154.6}

	};


	int n = 5;

	printf("Arreglo original: \n");
	print_people(people, n);

	printf("Ordenados por: \n")

	qsort(people, n, sizeof(Person), compare_by_name);
	printf("Nombre\n");
	print_people(people, n);

	qsort(people, n, sizeof(Person), compare_by_age);
        printf("Nombre\n");
        print_people(people, n);

        qsort(people, n, sizeof(Person), compare_by_height);
        printf("Altura (cm)\n");
        print_people(people, n);

	return 0;

}






