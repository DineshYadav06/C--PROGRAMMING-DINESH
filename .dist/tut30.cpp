#include<iostream>
using namespace std;

class Complex{

  int a, b;
  public:
  Complex(int , int );//  declartion Constructore

  void printNumber(){
    cout<<" Your number is "<< a << " + "<< b << "i "<< endl;

  }

};

Complex :: Complex(int x ,int y){  // --------> This is prameterized Constructore as it accept two Parameter;
  
   a = x;
   b = y;
}



int main(){
  cout<<"hello Dpcoding "<<endl;
  cout<<"Welcome to this world "<<endl;

    Complex a(4, 6); // Implicit call

    Complex b  = Complex( 9, 2); // Explicit call
  

  a.printNumber();
  b.printNumber();

return 0;



}