#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/Person.h"
#include "../include/functions.h"

int main() {

	Person people[5] = {
		{"Carlos", 45, 165.4},
		{"Belle", 34, 170.0},
		{"Leo", 21, 190.4},
		{"Esteban", 27, 175.8},
		{"Ana", 50, 154.6}

	};


	int n = 5;
	
	for (int i = 0; i < n; i++) {
		
		if (!validate_name(people[i].name)) {
			printf("ERROR: nombre no válido\n");
			return 1;
		}
		
		if (!validate_age(people[i].age)) {
			printf("ERROR: valor de edad no válido\n");
			return 1;
		}
		
		if (!validate_height(people[i].height)) {
			printf("ERROR: valor de altura no válido\n");
			return 1;
		}
		
	}

	printf("Arreglo original: \n");
	print_people(people, n);

	printf("Ordenados por: \n");

	qsort(people, n, sizeof(Person), compare_by_name);
	printf("Nombre\n");
	print_people(people, n);

	qsort(people, n, sizeof(Person), compare_by_age);
        printf("Edad\n");
        print_people(people, n);

        qsort(people, n, sizeof(Person), compare_by_height);
        printf("Altura (cm)\n");
        print_people(people, n);

	return 0;

}

