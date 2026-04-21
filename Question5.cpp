#include <iostream>
using namespace std;

double computeXValue() {
    double x = 0;
    for (double y = 20; y >= 6; y -= 4) {
        x += 2.0 / (y - 4);
    }
    return x;
}

int main() {
    const double x = computeXValue();

    cout << "x = " << x << endl;

    return 0;
}