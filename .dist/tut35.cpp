#include<iostream>
using namespace std;

//Destructor never takes an argument nor does it return any value
 int count = 0;

class Num{
  public:
  Num(){
    count++;
    cout<<"This is the time when constructor is called for object number "<<cout<<endl;
  

  }

  ~Num(){
    cout<<"This is the time when my destructois called for object number "<<cout<<endl;
    count--;


  }
}

int main(){
  cout<<"Hello DPCoding world"<<endl;
  cout<<"Welcome to this world "<<endl;

  cout<<"We are inside our main function "<<endl;
  cout<<"Creating first objectn1"<<endl;
  num n1;
  {
    cout<<"Entering the block"<<endl;
    cout<<"Creating two more object"<<endl;
    Num n2,n3;
    cout<<"Exiting this block"<<endl;
    
  }

return 0;
}