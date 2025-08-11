#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance:
// class Derived : visibility-mode Base1, visibility-mode Base2 {
//     // Body of Derived class
// };

// Base1 Class
class Base1 {
protected:
    int base1int; // Protected: Accessible in derived class

public:
    void set_base1int(int a) {
        base1int = a;
    }
};

// Base2 Class
class Base2 {
protected:
    int base2int;

public:
    void set_base2int(int b) {
        base2int = b;
    }
};

// Derived Class inheriting from Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void show() {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The sum of these values is " << (base1int + base2int) << endl;
    }
};
// The inherited derived class will look something like this 
// bese1int --------->> Protected
// bese1int --------->> Protected


int main() {
    cout << "Hello DPCoding World" << endl;
    cout << "Welcome to this World" << endl;

    // Object of Derived class
    Derived obj;
    obj.set_base1int(23);
    obj.set_base2int(98);

    obj.show();

    return 0;
}
