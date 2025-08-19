#include<iostream>
using namespace std;

template <class T1 = int , class T2 = float , class T3 = char>

class Dinesh{
  public:
  T1 a;
  T2 b;
  T3 c;
  Dinesh( T1 x, T2 y , T3 z){
      a = x;
      b = y;
      c = z;

  }

  void display(){
    cout<<"The value of  is " <<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
  }

};

int main(){
  cout<<"Hello DPCoding World "<<endl;
  cout<<"Welcome to this world "<<endl;
   Dinesh<>h(5, 4.9 ,'c');
   h.display();
   cout<<endl;
   Dinesh<float , char , char> g(1.4 , 'o', 'd');
   g.display();


return 0;
}