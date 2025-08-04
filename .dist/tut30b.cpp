#include<iostream>

using namespace std;

class Point{
  int x , y;
  public:
  Point(int a ,int b){
     x = a ;
     y = b;
  }
   
  void displayPoint(){
    cout<<"The Point  is ("<< x <<" , "<<y<<" )" <<endl;
    }


};



int main(){
  Point p1(2,4);
   cout<<"Hello DPCoding world "<<endl;
   cout<<"Welcome to this world "<<endl;

   p1.displayPoint();




  return 0;

}