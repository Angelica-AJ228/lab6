#include <stdio.h>
#include <Person.h>

void print_people(Person arr[], int n) {
	printf("Nombre           Edad     Altura(cm)\n");

	for (int i = 0; i < n; i++) {
		printf("%-15s  %-7d  %.2f\n",
				arr[i].name
				arr[i].age
				arr[i].height);
	}

	printf("\n");

}

