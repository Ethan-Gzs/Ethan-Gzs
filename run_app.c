//
// Created by ethan on 24-10-17.
// This project can sort strings, numbers. You can customize the sorting method.
// This code is not optimized and does not include the ability to interact with the user. If you need this feature,please modify it yourself. You can use functions to optimize
//
//

#include <stdio.h>
#include <stdlib.h>

#include "compare.h"
#include "sort.h"
#include "person.h"
/*
 * 设计概述：
 * 1.抽象层
 * 2.策略模式
 * 3.模块化
 * 4.安全性和跨平台
 */

int main(void) {

    int int_array[] = {1, 55, -4, 143, 897, 784, 100, -180, 199, -10};

    const char* string_array[] = {"gzs", "abc", "tencent", "ethan", "hello", "xiaomi"};

    int size_length_arr = sizeof(int_array) / sizeof(int_array[0]);
    generic_sort(int_array, size_length_arr, sizeof(int), int_compare ,NULL);

    int size_length_str = sizeof(string_array) / sizeof(string_array[0]);
    generic_sort(string_array, size_length_str, sizeof(char*), string_compare ,NULL);

    //Sort by first number size
    puts("int_array[] = ");
    for (int i = 0; i < size_length_arr; i++)
    {
        printf("%d \n", int_array[i]);
    }

    //Sort by first letter
    puts("string_array[] =  ");
    for (int i = 0; i < size_length_str; i++)
    {
        printf("%s \n", string_array[i]);
    }

    Person person_arr[] =
    {
        {"ethan",18},
        {"gzs",20},
        {"mary",40},
        {"tom",23},
        {"jerry",28},
        {"mark",70}
    };

    size_t people_count = sizeof(person_arr) / sizeof(person_arr[0]);

    compare_func compare_funcs[] = {compare_name, compare_age};

    //Sort by first letter or age
    int num;
    puts("Enter the number of the person you want to sort: (0 for name or 1 for age)");
    scanf_s("%d", &num);
    int compare_choice = num; // 0 for name     1 for age

    generic_sort(person_arr, people_count, sizeof(Person), compare_funcs[compare_choice], NULL);

    puts("person_arr[] = ");
    for (int i = 0; i < people_count; i++)
    {
        printf("%s, %d\n", person_arr[i].name, person_arr[i].age);
    }

    return EXIT_SUCCESS;
}

