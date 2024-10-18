//
// Created by ethan on 24-10-17.
// This file completes the writing of the function
//
#include <string.h>
#include "compare.h"
#include "person.h"

int int_compare(const void *a, const void *b, void* context) {
    (void)context;

    int int_a = *(const int*)a;
    int int_b = *(const int*)b;

    return int_a - int_b;
}


int string_compare(const void *a, const void *b, void* context) {
    (void)context;

    const char *string_a = *(const char** )a;
    const char *string_b = *(const char** )b;

    //strcmp need a compare length
    return strcmp(string_a, string_b);
}

int compare_name(const void *a, const void *b, void* context) {
    (void)context;

    const Person* person_a = (const Person*)a;
    const Person* person_b = (const Person*)b;

    return strcmp(person_a -> name, person_b -> name);
}

int compare_age(const void *a, const void *b, void* context) {
    (void)context;

    const Person* person_a = (const Person*)a;
    const Person* person_b = (const Person*)b;

    return person_a -> age - person_b -> age;
}