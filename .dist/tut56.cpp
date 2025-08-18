#include<iostream>
using namespace std;
 
class BaseClass{
  public:
  int var_base = 1;
  virtual void display(){
    cout<<"Diplaying Base class variable var base  "<<var_base<<endl;

  }

};

class DerivedClass : public BaseClass{
   public:
  int var_derived = 2;
  void display(){
     cout<<"Diplaying Base class variable var base  "<<var_base<<endl;

    cout<<"Diplaying Base class variable var derived "<<var_derived<<endl;
  }
};

int main(){
  cout<<"Hello DPCoding World "<<endl;
  cout<<"Welcome to this World "<<endl;


  BaseClass * base_class_pointer;
  BaseClass obj_base;
  DerivedClass obj_derived;

  base_class_pointer = &obj_derived;
  base_class_pointer->display();

return 0;
}