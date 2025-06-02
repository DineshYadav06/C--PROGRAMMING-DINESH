#include<iostream>

using namespace std;

// Function Prototypes
// Types of function-name(Argument)

// int sum(int a , int b);// Acceptable
// int sum(int a , b);// Not Acceptable
// int sum(int a , int );// Acceptable

int sum(int a , int );// Acceptable

void g(void);



int main(){
  int num1 , num2;
  cout<<"Hello DPCoding world "<<endl;
  cout<<"Welcome to this world "<<endl;
  cout<<"Please Enter  your  First number "<<endl;
  cin>>num1;

  //Num1 & num2  are atual paramiter 
  cout<<"Now, Please Enter your second number "<<endl;
  cin>>num2;

  cout<<"Your Sum "<<sum( num1 , num2)<<endl;
  g();


  return 0;
}

int sum(int a , int b){

  // Formal Parameter a and  b are taking value from actual parameter num1 and num2

  int c = a + b;
  return c;

}

void g(){
  cout<<"GOOD MORINING DP";
  
}