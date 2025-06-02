#include<iostream>
using namespace std;

int main(){
  cout<<"Hello DpCoding "<<endl;
  cout<<"Welcome to this world "<<endl;

  // ************What is Pointer?...........>> data types which holds the address of other data types.......**********

  int  a = 3;
  int* b = &a;
  // &------>> (Address of) Operator

  cout<<"The Address of a is "<< &a<<endl;
  cout<<"The Address of a is "<<b<<endl;

  // *------>> (Value of)  dereference  operator

  cout<<"The value  at  Address b is  "<<*b<<endl;


  // ......Pointer to Pointer >>>
  int** c = &b;

  cout<<"The Address of b is "<<&b<<endl;
  cout<<"The Address of b is "<<c<<endl;

  cout<<"The Value at Address  Value at (Value at( c))  is "<<**c<<endl;




return 0;
}