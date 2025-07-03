#include<iostream>
using namespace std;


class Empolyee 
{

    private:
    int a, b ,c;

    public:
     int d,e;
     void setData(int a1, int b1, int c1); // Declaration
     void getData(){
      cout<<"The Value of a is "<<a<<endl;
      cout<<"The Value of b is "<<b<<endl;
      cout<<"The Value of c is "<<c<<endl;
      cout<<"The Value of d is "<<d<<endl;
      cout<<"The Value of e is "<<e<<endl;
     }

};

void Empolyee :: setData(int a1, int b1, int c1){
  a = a1;
  b= b1;
  c= c1;
  
}





int main(){
  cout<<"Hello Dpcoding "<<endl;
  cout<<"Welcome to this website "<<endl;

  Empolyee dinesh;
  dinesh.d = 9;
  dinesh.e = 29;
  dinesh.setData(1,3,7);
  dinesh.getData();

return 0;
}