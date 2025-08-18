#include <iostream>
using namespace std;

// Function template
template <typename T>   // "T" is a placeholder for any data type
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Addition of integers: " << add(5, 10) << endl;
    cout << "Addition of doubles: " << add(5.5, 3.2) << endl;
    cout << "Addition of characters: " << add('A', 'B') << endl; // ASCII addition
    return 0;
}
