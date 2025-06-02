#include<iostream>

using namespace std;

int main(){
  cout<<"Hello DPCoding  "<<endl;
  cout<<"Welcome to this world "<<endl;

  int marks[] = {12,23,34,56};

  int mathmarks[4];
  mathmarks[0] = 24;
  mathmarks[1] = 44;
  mathmarks[2] = 34;
  mathmarks[3] = 94;



// cout<<"These are math marks "<<endl;
//   cout<<mathmarks[0]<<endl;
//   cout<<mathmarks[1]<<endl;
//   cout<<mathmarks[2]<<endl;
//   cout<<mathmarks[3]<<endl;

  


//   cout<<"These are normal marks "<<endl;
//   cout<<marks[0]<<endl;
//   cout<<marks[1]<<endl;
//   cout<<marks[2]<<endl;
//   cout<<marks[3]<<endl;



for (int i = 0; i < 4; i++)
{
  cout<<"The value of Marks "<<i<<" is  "<<marks[i]<<endl;
}


// Pointer to Array

int* p = marks;

cout<<"The value of marks[0]  is "<<*p<<endl;
cout<<"The value of marks[1]  is "<<*p+1<<endl;
cout<<"The value of marks[2]  is "<<*p+2<<endl;
cout<<"The value of marks[3]  is "<<*p+3<<endl;





  return 0;
}