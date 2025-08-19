#include<iostream>
using namespace std;


// float funcAverage(int a , int b){
//   float avg = (a + b)/2;
//   return avg;

// }
// float funcAverage(int a , float b){
//   float avg = (a + b)/2.0;
//   return avg;

// }

template<class T>
void swap( T &a, T &b){
  T temp = a;
  a = b;
  b = temp;
}


template <class T1, class T2>
float funAverage2(T1 a, T2 b){
  float avg = (a+b)/2.0;
  return avg;
  int  x= 5 , y = 7;
  swap(x ,y);
  cout<<x<<y<<endl;
}

int main(){
  cout<<"Hello DPCoding world "<<endl;
  cout<<"Welcome to this world "<<endl;
  float a;
  a = funcAverage( 5,3);
  printf("The average of these number is %.3f ", a);

return 0;
}