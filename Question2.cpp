#include <iostream>
#include <cmath>  
using namespace std;

double computeSphereVolume(double radius) {
    const double PI = 3.14159265358979;
    const double rCubed = pow(radius, 3);
    return (4.0 / 3.0) * PI * rCubed;
}

int main() {
    double radius;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    const double volume = computeSphereVolume(radius);

    cout << "Volume of sphere with radius " << radius
         << ": " << volume << endl;

    return 0;
}