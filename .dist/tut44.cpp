#include <iostream>
using namespace std;

// Virtual Base Class
class A {
public:
    A() {
        cout << "Constructor of A\n";
    }
    void show() {
        cout << "Function of A\n";
    }
};

// B and C inherit A virtually
class B : virtual public A {
public:
    B() {
        cout << "Constructor of B\n";
    }
};

class C : virtual public A {
public:
    C() {
        cout << "Constructor of C\n";
    }
};

// D inherits both B and C
class D : public B, public C {
public:
    D() {
        cout << "Constructor of D\n";
    }
};

int main() {

  cout<<"Hello DPCoding World"<<endl;
  cout<<"Welcome to this world "<<endl;
    D obj;
    obj.show();  // No ambiguity, only one A::show() exists
    return 0;
}
