#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument -list): initilization-section
{

             assingnment + other code;

}

class Test{
  int a;
  int b;
  public:
  Test(int i,int j) :a(i),b(j){constructor-body}
};

*/

class Test
{
  int a;
  int b;

public:
  // Test(int i, int j) : a(i), b(j)
  // Test(int i, int j) : a(i+j), b(j+i)
  // Test(int i, int j) : a(i), b(2*j)
  Test(int i, int j) :  b(j) ,a(i +b) // ---------> Red flag this will create problems because a will be initialize first 
  
  {
    cout << "Constructor Executed" << endl;
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
  }
};

int main()
{
  cout << "Hello DPCoding world" << endl;
  cout << "Welcome to this world " << endl;
  Test t(4,8);

  return 0;
}