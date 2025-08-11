#include<iostream>
using namespace std;



class Base1{
  public:
  void greet(){
    cout<<"How are you ?"<<endl;


  
  }

};

class Base2{
  public:
  void greet()
  {
    cout<<"kaise ho?"<<endl;
  } 

};

class Derived : public Base1, public Base2
{
  int a;
  public:
  void greet(){
    Base1 ::greet();
  }
  
};



class B{
  public:
  void say(){
    cout<<"Hello Wrold "<<endl;
  }
};


class D : public B{
  int a ;
  // D's new sasy method will override base class's say() method
  public:
  void say(){
    cout <<"Hello my World beutiful people "<<endl;
  }

};

int main(){
  cout<<"Hello DPCding World "<<endl;
  cout<<"Welcome to this World "<<endl;

  // -------> Ambibuity 1
  // Base1 base1obj; 
  // Base2 base2obj;
  // base1obj.greet();
  // base2obj.greet();

  // Derived d;
  // d.greet();




  //--------->Ambibuity 2
  B b;
  b.say();
  
D d;
d.say();
  

  return 0;

}