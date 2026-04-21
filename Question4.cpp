#include <iostream>
#include <cctype>   
using namespace std;

string checkCase(char ch) {
    if (isupper(ch)) {
        return "uppercase";
    }

    if (islower(ch)) {
        return "lowercase";
    }

    return "neither uppercase nor lowercase";
}

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "'" << ch << "' is " << checkCase(ch) << endl;

    return 0;
}