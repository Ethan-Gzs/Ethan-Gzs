//
// Created by ethan on 24-10-17.
//
#include "sort.h"
#include <stdlib.h>

//包装器
static int compare_warpper(void* context, const void *a, const void *b) {
    compare_func compare = (compare_func)context;

    //Adjusted to math expected signature
    return compare(a, b, NULL);
}

void generic_sort(void* array, size_t length, size_t size, compare_func compare, void* context) {
    //qsort_s(array, length, size, compare, context);
#ifdef _WIN32
     qsort_s(array, length, size, compare_warpper, (void*)compare);
#else
    //跨平台
     qsort_r(array, length, size, compare_warpper, (void*)compare);
#endif

}

