#include<iostream>
using namespace std;

// Pointers to Derived Classes in C++   //

class BaseClass{
  public:
  int var_base;
  void display(){
    cout<<"Diplaying Base class variable var base "<<var_base<<endl;

  }

};

class DerivedClass : public BaseClass{
   public:
  int var_derived;
  void display(){
     cout<<"Diplaying Base class variable var base "<<var_base<<endl;

    cout<<"Diplaying Base class variable var derived"<<var_derived<<endl;
  }

};

int main(){
  cout<<"Hello DPCoding World "<<endl;
  cout<<"Welcome to this World "<<endl;

  BaseClass * base_class_pointer;
  BaseClass obj_base;
  DerivedClass obj_derived;
  base_class_pointer = &obj_derived; // Pointing base class pointer toderived class
base_class_pointer -> base = 56;
// base_class_pointer -> var derived = 134; // will throw an error
base_class_pointer-> display();

return 0;
}