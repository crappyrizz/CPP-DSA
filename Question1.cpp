#include <iostream>
using namespace std;

long long calculateSecondsFromDays(int days) {
    return static_cast<long long>(days) * 24 * 60 * 60;
}

int main() {
    int days;

    cout << "Enter the number of days: ";
    cin >> days;

    const long long seconds = calculateSecondsFromDays(days);

    cout << "Number of seconds in " << days
         << " day(s): " << seconds << endl;

    return 0;
}