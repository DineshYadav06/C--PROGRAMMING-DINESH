#include<iostream>
using namespace std;

class Complex {
    int a, b;
public:
    Complex(int x, int y) {
        a = x;
        b = y;
    }

    Complex(int x){
      a = x;
      b = 0;
    }

    Complex(){
      a = 0;
      b = 0;
    }

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main() {
    cout << "Hello DpCoding world " << endl;
    cout << "Welcome to this world " << endl;

    Complex c1(12, 4);
    c1.printNumber();

    Complex c2 = Complex(7, 8);
    c2.printNumber();

    Complex c3(32);
    c3.printNumber();

    Complex c4;
    c4.printNumber();
    


    return 0;
}
