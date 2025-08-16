#include<iostream>
using namespace std;

class Complex{
  int real,imaginary;
  public:
  void getData(){
    cout<<"The real part is "<<real<<endl;
    cout<<"The imaginary part is "<<imaginary<<endl;
  }
  void setData(int a, int b){
    real = a;
    imaginary = b;
  }
};


int main(){
  cout<<"Hello DPCoding World "<<endl;
  cout<<"Welcome to this world "<<endl;
  // Complex c1;
  // Complex *ptr = &c1;
  Complex *ptr =new Complex;
  // (*ptr).setData(156,54);   // is exactly same as
  // (*ptr).getData();
 ptr->setData(156,54); // Arrow(->) Operator
 ptr->getData();






 // Array of objects
  Complex *ptr1 = new Complex[4];
 ptr1->setData(36,89); // Arrow(->) Operator
 ptr1->getData();
    
  return 0;
}