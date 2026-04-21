#include <iostream>
using namespace std;

double computeAverage(const double values[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += values[i];
    }
    return sum / size;
}

int main() {
    const int SIZE = 5;
    double values[SIZE];

    cout << "Enter 5 values:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "  Value [" << (i + 1) << "]: ";
        cin >> values[i];   
    }
 
    const double average = computeAverage(values, SIZE);

    cout << "Average of the 5 values: " << average << endl;

    return 0;
}