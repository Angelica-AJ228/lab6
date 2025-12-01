#include <string.h>
#include "../include/functions.h"

int compare_by_height(const void *a, const void *b) {
	const Person *p1 = (const Person *)a;
	const Person *p2 = (const Person *)b;
	
	if (p1->height < p2->height) return -1;
	if (p1->height > p2->height) return 1;
	return 0;
}

int compare_by_name(const void *a, const void *b) {
	const Person *p1 = (const Person *)a;
	const Person *p2 = (const Person *)b;
	return strcmp(p1->name, p2->name);
}

int compare_by_age(const void *a, const void *b) {
	const Person *p1 = (const Person *)a;
	const Person *p2 = (const Person *)b;
	return p1->age - p2->age;

}

int validate_name(const char *name) {
	int len = strlen(name);

	if (len == 0 || len > 50) //pusimos que era de cincuenta lo maximo, aqui se hace comprobacion con el len
		return 0;

	int only_num = 1;

	for (int i = 0; i < len; i++) { //aqui es que si only_num devuelve cero es porque si hay numeros de cero a nueve, eso es invalido porque no es un nombre
		if (!(name[i] >= '0' && name[i] <= '9')) {
			only_num = 0;
			break;
		}
	}

	if (only_num)
		return 0;

	return 1;

}

int validate_age(int age) {
    return (age > 0 && age < 100);
}

int validate_height(double height) {
    return (height > 0.0 && height < 210.0);
}
