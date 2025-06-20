#include<iostream>
using namespace std;

// int factorial(int n){
//   if(n <= 1){
//     return 1;
//   }
//   return n * factorial(n - 1);
// }

// int main(){
//   cout<<"Hello DPcoding \n"<<endl;
//   cout<<"Welcome to this world "<<endl;
//   int n;

//   //Factorial of number :
//   //6! = 6*5*4*3*2*1 = 720
//   //0! = 1 definition
//   //1! = 1 definition
//   // n! = n *(n - 1)!


//   cout<<"Please Enter your Number "<<endl;
//   cin>> n;

//   cout<<"The factorial of  "<<n<<" is "<<factorial(n)<<endl;
  

// return 0;
// }


//  ************fibonacci Sequence***********************


int fib(int n){
  if( n < 2){
    return 1;
  }
  return fib(n-2) + fib(n-1);
}



int main(){
  cout<<"Hello DPcoding \n"<<endl;
  cout<<"Welcome this world "<<endl;
  int a;

  cout<<"PLease Enter your number "<<endl;
  cin>>a;

  cout<<"The term in fibonacci Sequence at Postioin  "<<a<<" is "<<fib(a)<<endl;



  
return 0;
}