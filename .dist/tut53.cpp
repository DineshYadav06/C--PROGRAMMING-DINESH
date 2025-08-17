#include<iostream>
using namespace std;

class A{
  int a;
  public:
   void setdata(int a){
     this->a = a; // this ia a keyword which is a pointer which points tom the object which invokes the member function 
   }
   void getdata(){
    cout<<"The Value of a is "<<a<<endl;
   }
  

   

};

int main(){
  cout<<"Hello DPCoding World "<<endl;
  cout<<"Welcome to this World "<<endl;
  A a;
  a.setdata(5);
  a.getdata();

 


return 0;
}