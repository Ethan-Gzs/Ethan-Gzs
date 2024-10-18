//
// Created by ethan on 24-10-17.
// This code initialization compare object function
//

#ifndef COMPARE_H
#define COMPARE_H

int int_compare(const void *a, const void *b, void* context);

int string_compare(const void *a, const void *b, void* context);

int compare_name(const void *a, const void *b, void* context);

int compare_age(const void *a, const void *b, void* context);

#endif //COMPARE_H
