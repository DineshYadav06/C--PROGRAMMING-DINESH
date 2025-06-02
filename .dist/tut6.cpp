//This are two types of header files:
//1. System header files : It comes with the complier
#include<iostream>
//2. User define header files : It is written by present in the current directory
using namespace std;

int main(){

  cout<<"Hello Dpcoding \n";
  cout<<"Welcome to this world "; 

   int a = 9, b= 17;
   cout<<"Opterator in C++"<<endl;
   cout<<"type of Opterator in C++"<<endl;

   cout<<"Your number of a "<< a <<" and your number of b "<< b;

   cout<<"\nThe Value of  a + b  is ..."<< a + b ;
   cout<<"\nThe Value of  a - b  is ..."<< a - b;
   cout<<"\nThe Value of  a * b  is ..."<< a * b;
   cout<<"\nThe Value of  a / b  is ..."<< a / b;
   cout<<"\nThe Value of  a % b  is ..."<< a % b;
   cout<<"\nThe Value of  a++ is ..."<< a++;
   cout<<"\nThe Value of  a-- is ..."<< a--;


   // comparsion operators
   cout<<"\n\nFollowing of comparsion operators";
   cout<<"\nThe Value of a == b is "<< (a==b)<<endl;
   cout<<"The Value of a != b is "<< (a!=b)<<endl;
   cout<<"The Value of a <= b is "<< (a<=b)<<endl;
   cout<<"The Value of a >= b is "<< (a>=b)<<endl;
   cout<<"The Value of a < b is "<< (a<b)<<endl;
   cout<<"The Value of a > b is "<< (a<b)<<endl;


   //logical Operators
   cout<<"\nFollowing of Logical Operators"<<endl;
   cout<<"The Value of logiacal operator ((a==b) && (a<b)) "<< ((a==b) && (a<b))<<endl;
   cout<<"The Value of logiacal operator ((a==b) || (a<b)) "<< ((a==b) || (a<b))<<endl;
   cout<<"The Value of logiacal operator (!(a==b)) "<< (!(a==b))<<endl;
   
   
  return 0;

}
