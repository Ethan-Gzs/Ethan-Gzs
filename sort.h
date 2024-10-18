//
// Created by ethan on 24-10-17.
//Pass in the data and define the sort function
//
//void*  可接受任意类型的数

#ifndef SORT_H
#define SORT_H

#include <stddef.h> //for size_t

typedef int (*compare_func)(const void*, const void*,void* context);

void generic_sort(void* array, size_t length, size_t size, compare_func compare, void* context);

#endif //SORT_H
