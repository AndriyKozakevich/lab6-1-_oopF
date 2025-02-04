#include "include_average.h"

// Реалізація шаблонної функції
template <typename T>
double calculateAverage(const T* arr, size_t size) {
    if (size == 0) return 0; // Захист від ділення на 0

    double sum = 0;
    for (size_t i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

// Явна інстанціація шаблонів (необхідна для розділення .h та .cpp)
template double calculateAverage<int>(const int*, size_t);
template double calculateAverage<float>(const float*, size_t);
template double calculateAverage<double>(const double*, size_t);
