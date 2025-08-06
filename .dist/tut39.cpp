#include <iostream>
using namespace std;

class Base
{
protected:
  int a;

private:
  int b;
};
/*
For a protected memeber:

                        Public Derivation      Private Drivation     Poretected Derivation
1. Private members        Not inherited          Not inherited            Not inherited
2. Protected members       Protected              Private                  Protected
3. Public memebers          Public                Private                   Protected



*/

class Derived : protected Base
{


};

int main()
{
  cout << "Hello DPCoding World" << endl;
  cout << "Welcome to this world " << endl;

  Base b;
  Derived d;
  // cout<<"d.a"  // Will not work since a is protected in both base as well as derived class
  

  return 0;
}