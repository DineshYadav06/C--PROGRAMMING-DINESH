#include<iostream>
#include<vector>
using namespace std;

// Template Display Function
template<class T>
void display(vector<T> &v) {
    cout << "Displaying this vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";   // OR v.at(i)
    }
    cout << endl;
}

int main() {
    cout << "Hello DPCoding World" << endl;
    cout << "Welcome to this World " << endl;

    // Ways to create a vector 
    vector<int> vec1;             // Zero length vector
    vector<char> vec2(4);         // 4 - element character vector (empty chars)
    vector<char> vec3(vec2);      // vec3 copied from vec2
    vector<int> v(6, 3);          // 6 - element vector of 3s

    display(v);   // Show vec of 6 elements (3 3 3 3 3 3)

    vec2.push_back('5');  // add character '5'
    display(vec2);

    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);
    display(vec1);

    // Insert at position
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 1, 5, 568);   // insert 5 copies of 568 at position 1
    display(vec1);

    return 0;
}
