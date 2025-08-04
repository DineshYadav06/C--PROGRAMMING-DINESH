#include<iostream>
using namespace std;

class Number{

  int a;
  public:
  Number(){
     a = 0;
  }

  Number(int num){
    a = num;

  }

  Number(Number &obj){
    cout<<"Copy constructor called"<<endl;
    a = obj.a;
  }

   void Display(){
    cout<<"The number for this Object is "<<a<<endl;

   }

};

int main(){
  cout<<"Hello DPcoding World "<<endl;
  cout<<"Welcome to this world"<<endl;

  Number x , y, z(76);
  x.Display();
  y.Display();
  z.Display();

  Number z1(x);
  z1.Display();
  //z1 Should exactly reseable z or x or y;





  return 0;

}