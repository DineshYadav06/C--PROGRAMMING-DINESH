#include<iostream>
using namespace std;

class Simple {
    int data1, data2;

public:
    Simple(int a, int b= 6) {
        data1 = a;
        data2 = b;
    }

    void printData();
};

void Simple::printData() {
    cout << "Your data is " << data1 << " and " << data2 << endl;
}

int main() {
    cout << "Hello DpCoding world" << endl;
    cout << "Welcome to this world " << endl;

    Simple s1(8, 9);
    s1.printData();

    Simple s2(4);
    s2.printData();

    return 0;
}
