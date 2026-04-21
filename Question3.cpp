#include <iostream>
using namespace std;

double calcArea(double side) {
    return side * side;
}

double calcPerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;

    const double area = calcArea(side);
    const double perimeter = calcPerimeter(side);

    cout << "Area of square:      " << area << endl;
    cout << "Perimeter of square: " << perimeter << endl;

    return 0;
}