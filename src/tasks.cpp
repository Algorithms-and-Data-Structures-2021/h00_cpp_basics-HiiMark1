#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {

    if (lhs != nullptr && rhs != nullptr) {
        int a = *lhs;
        *lhs = *rhs;
        *rhs = a;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_cols > 0 && num_rows > 0) {
        int **array_2d = new int *[num_rows];

        for (int i = 0; i < num_rows; i++) {
            array_2d[i] = new int[num_cols];
        }

        for (int i = 0; i < num_rows; i++) {
            for (int j = 0; j < num_cols; j++) {
                array_2d[i][j] = init_value;
            }
        }

        return array_2d;
    }

    return nullptr;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {

    if ((arr_2d_source == nullptr || arr_2d_target == nullptr) || (num_rows <= 0 || num_cols <= 0)) {
        return false;
    }

    for (int i = 0; i < num_rows; ++i) {
        for (int j = 0; j < num_cols; ++j) {
            arr_2d_target[i][j] = arr_2d_source[i][j];
        }
    }

    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {

    for (int i = 0; i < arr.size() / 2; ++i) {
        int a = arr[i];
        arr[i] = arr[arr.size() - i - 1];
        arr[arr.size() - i - 1] = a;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin != nullptr && arr_end != nullptr) {
        while (arr_begin <= arr_end) {
            int a = *arr_begin;
            *arr_begin = *arr_end;
            *arr_end = a;
            ++arr_begin;
            --arr_end;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {

    if (&*arr != nullptr && size > 0) {
        int *max = &arr[0];

        for (int i = 1; i < size; ++i) {
            if (arr[i] > *max) {
                *max = arr[i];
            }
        }

        return max;
    }

    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {

    if (arr.empty()) {
        return {};
    }

    vector<int> array;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 != 0) {
            array.push_back(arr[i]);
        }
    }

    return array;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    if (arr_a.empty() || arr_b.empty()) {
        return {};
    }

    vector<int> array;

    for (int i = 0; i < arr_a.size(); ++i) {
        for (int j = 0; j < arr_b.size(); ++j) {
            if (arr_a[i] == arr_b[j]) {
                array.push_back(arr_b[j]);
            }
        }
    }

    return array;
}
