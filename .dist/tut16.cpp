#include<iostream>
using namespace std;


// The call by the reference using pointer
void swapPointer(int* a , int* b){
  int temp = *a;
  *a = *b;
  *b = temp;


} 

// The call by the reference using C++ reference variables
void swapReferenceVar(int &a , int &b){
  int temp = a;
  a = b;
  b = temp;


} 


// int sum(int a, int b){

//   int c = a + b;
//   return c;
// }

int main(){
  int x = 4 ,y= 5;
  cout<<"Hello DPCoding "<<endl;
  cout<<"Welcome this world "<<endl;
  // cout<<"The the sum a and b"<<sum(a ,b)<<endl;


  cout<<"The value of  x = "<<x<<" and the value of y = "<<y<<endl;
  // swapPointer(&x, &y); >>> This will swap a and b from Pointer reference
  // swapReferenceVar(x ,y); >>> This will swap a and b from reference variable 
  swapReferenceVar(x ,y);

   cout<<" swap : The value of  x = "<<x<<" and the value of y = "<<y<<endl;

return 0;
}