#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of int
    vector<int> v;

    // Insert elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Print elements
    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
 
    // Access elements
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Element at index 1: " << v.at(1) << endl;

    // Remove last element
    v.pop_back();

    cout << "After pop_back: ";
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
