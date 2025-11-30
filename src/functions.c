#include <string.h>
#include "functions.h"

int compare_by_height(const void *a, const void *b) {
	const Person *p1 = (const Person *)a;
	const Person *p2 = (const Person *)b;
	
	if (p1->height < p2->height) return -1;
	if (p1->height > p2->height) return 1;
	return 0;
}

