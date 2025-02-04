#include <iostream>
#include "include_average.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    // 🔹 Використання функції для середнього арифметичного
    int intArray[] = { 5, 10, 15, 20, 25 };
    size_t intSize = sizeof(intArray) / sizeof(intArray[0]);

    double avg = calculateAverage(intArray, intSize);
    cout << "Середнє арифметичне int масиву: " << avg << endl;

    float floatArray[] = { 1.1f, 2.2f, 3.3f, 4.4f };
    size_t floatSize = sizeof(floatArray) / sizeof(floatArray[0]);

    double avgFloat = calculateAverage(floatArray, floatSize);
    cout << "Середнє арифметичне float масиву: " << avgFloat << endl;

    return 0;
}
