#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "../include/Person.h"

int compare_by_height(const void *a, const void *b);
int compare_by_name(const void *a, const void *b);
int compare_by_age(const void *a, const void *b);

int validate_name(const char *name);
int validate_age(int age);
int validate_height(double height);

#endif
