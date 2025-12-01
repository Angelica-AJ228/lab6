#include <stdio.h>
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
		
		if (!validate_name(names[i])) {
			printf("ERROR: nombre no válido\n");
			return 1;
		}
		
		if (!validate_age(ages[i])) {
			printf("ERROR: valor de edad no válido\n");
			return 1;
		}
		
		if (!validate_height(heights[i])) {
			printf("ERROR: valor de altura no válido\n");
			return 1;
		}
		
		strcpy(people[i].name, names[i]);
		people[i].age = atoi(ages[i]); //atoi convierte texto a int pero solo si el texto se alinea con los caracteres numericos
		people[i].height = atof(heights[i]); //casi que lo mismo que atoi pero con float, en altura estamos usando decimales
	}

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

