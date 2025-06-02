#include<iostream>

using namespace std;

int main(){
  int age;

  cout<<"Hello DPcoding "<<endl;
  cout<<"Welcome to this world "<<endl;

  cout<<"Please Enter your age :"<<endl;
  cin>>age;

  // if(age <18) && (age>0){
  //   cout<<"You can not comes in my party\n";
  // }else if(age == 18){
  // cout<<"You are a kid and youu will get a kid pass to the party  \n";
  // }else if( age <1){
  //   cout<<"You are not yet born "<<endl;

  // }else{
  //   cout<<"You can come to the party "<<endl;
  // }



  // Selection control structure :Switch case statements

  switch (age)
  {
  case 18:
  cout<<"You are 18"<<endl;
    break;
    case 22:
  cout<<"You are 22"<<endl;
    break;
    case 2:
  cout<<"You are 2"<<endl;
    break;
  default:
  cout<<"No special cases"<<endl;
    break;
  }

  cout<<"Done with switch case";


  
  



  return 0;

}