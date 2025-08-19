#include<iostream>
using namespace std;

/*

CLASS TEMPLATE WITH MULTIPLE PARAMETER( ONE , TWO OR MORE THEN TWO)

Tamplate<class T1, class T2 ........(COMMA SEPERTED);
class nameOfClass{
// body
}



*/
Tamplate<class T1, class T2 >

 class myClass{
  public:
  T1 data1;
  T2 data2;
  myClass(){
    data1 = 2;
    data2 = '7';
  }

  void display(T1 a , T2 b){
    cout<<this->data1<<this->data2;
  }
 };




int main(){
  cout<<"Hello DPCoding World"<<endl;
  cout<<"Welcome to this World "<<endl;

  myClass<int, char> obj(1, 'c');

return 0;
}