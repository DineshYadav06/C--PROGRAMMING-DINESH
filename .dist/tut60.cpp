#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in c++ are :
1. fstreambase
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase


*/

// In order work with files in c++, you willl have  to open  it . Primarly, there are 2 ways to open a file :
// 1. Using the constructor
// 2. Using the member function open() of the  class


int main(){
  cout<<"Hello DPCoding world "<<endl;
  cout<<"Welcome to this world "<<endl<<endl;
  string st = "Dinesh yadav ";
  string st2;

// Opening files using constructor and reading it 


// ofstream out("Sample.txt"); //  Write operation
// out<<st;


//opening files Using constructor and reading to it 
ifstream in("Sample60b.txt"); //  reading opration
// in>>st2;

getline(in , st2);
getline(in , st2);


return 0;
}