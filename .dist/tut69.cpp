#include<iostream>
using namespace std;

template <class T>
class Dinesh {
public:
    T data;
    Dinesh(T a) {
        data = a;
    }

    void display();
};

template <class T>
void Dinesh<T>::display() {
    cout << data << endl;
}

// Normal function
void func(int a) {
    cout << "I am first func() " << a << endl;
}

// Template function
template <class T>
void func(T a) {
    cout << "I am templatised func() " << a << endl;
}

int main() {
    cout << "Hello DPCoding World " << endl;
    cout << "Welcome to this world " << endl;

    Dinesh<int> h1(5);
    h1.display();

    Dinesh<char> h2('c');
    h2.display();

    func(4);     // Calls normal func(int)
    func(9.5);   // Calls template func(T)

    return 0;
}
