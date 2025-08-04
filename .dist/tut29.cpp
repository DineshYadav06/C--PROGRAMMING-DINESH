#include<iostream>
using namespace std;

class Complex{
  int a ,b;
  public: 
  // Creating a constructor 
  //Constructor is special member function with same name as of the class
    // It is  uesed to initilize the objects of its class
  //it is automatically invoked whenever an object is created
    
  Complex(void);// Constructor declartion

  void printNumber(){
    
    
  cout<<"Your number is "<< a << " + "<< b<<" i "<< endl;

}
};

Complex :: Complex(void) // ----> This is a default constructor as it takes no parameter 
{
  a = 10;
  b  = 5;

}


int main(){
  cout<<"Hello DPCoding "<<endl;
  cout<<"Welcome to this World "<<endl;

Complex c;
c.printNumber();


return 0;
}