#include<iostream>

using namespace std;
 int glo= 9;

void sum(){
   int a ;
   cout<< glo;

}
//understanding to local and global variables
int main(){
  //  int a = 5;
  //  int b = 6;
   int glo =  98;
   glo= 78;
    bool is_true = true;

   sum();
 cout<<  glo<<is_true;

   int a = 6,b =9;
   float PI = 3.14;
    char c = 'd';
  // cout<<"Hello DPcoding\n ";
  // cout<<"Welcome to this world\n\n ";
  // cout<<"the value of a is "<<a<<"\n the value of b is .."<<b;

  // cout<<"\nThe value of is PI "<<PI;
  // cout<<"\nThe value of is c = "<<c;
  
  

  
  
  return 0;
}