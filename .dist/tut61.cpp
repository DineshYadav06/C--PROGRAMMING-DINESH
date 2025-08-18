#include<iostream>
#include<fstream>
using namespace std;


// Connecting our file with hout stream 

int main(){
  cout<<"Hello DPCoding world "<<endl;
  cout<<"Welcome to this Wrold "<<endl;
  ofstream hout("Sample.txt");

  //  Creating a name variable enter by the user 
  cout<<"Enter your name "<<endl;
  string name;
  cin>>name;

  //Writing  a string  to the file 
  hout<<"My name is " +  name;

  hout.close();

  ifstream hin("Sample60b.txt");
  string content;
  hin>>content;
  cout<<"The content of this file is :"<<content;

  hin.close();
return 0;
}