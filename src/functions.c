#include <string.h>
#include "functions.h"

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

	if (len == 0 || len > 50)
		return 0;

	int only_num = 1;

	for (int i = 0; i < len; i++) { //pusimos que era de cincuenta lo maximo, aqui se hace comprobacion con el len
		if (!(name[i] >= '0' && name[i] <= '9')) {
			only_num = 0;
			break;
		}
	}

	if (only_num)
		return 0;

	return 1;

}


